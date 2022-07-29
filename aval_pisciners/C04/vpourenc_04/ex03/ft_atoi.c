/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpourenc <vpourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:31:13 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/07/29 05:07:27 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *c)
{
	int	neg;
	int	pos;
	int	res;

	neg = 1;
	pos = 0;
	res = 0;
	while (c[pos] <= 32 || c[pos] == 127)
	{
		pos++;
	}
	while (c[pos] == '+' || c[pos] == '-')
	{
		if (c[pos] == '-')
			neg *= -1;
		pos++;
	}
	while (c[pos] >= '0' && c[pos] <= '9')
	{
		res *= 10;
		res += c[pos] - 48;
		pos++;
	}
	return (res * neg);
}

int    main(void)
{
    printf("%d\n", ft_atoi(" -+-42--"));
}
