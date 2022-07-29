/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpourenc <vpourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:26:23 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/07/29 05:03:24 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	posit;

	posit = 0;
	while (str[posit])
	{
		write(1, &str[posit], 1);
		posit++;
	}
}

int    main(void)
{
    char str[] = "Bom dia!";
    char *p_str;

    p_str = str;
    ft_putstr(p_str);
}

