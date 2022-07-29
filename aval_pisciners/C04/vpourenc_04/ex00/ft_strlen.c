/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpourenc <vpourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:59:34 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/07/29 05:02:52 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


	int main(void)
{
    char str[] = "Rodholfo";
    char *p_str;

    p_str = str;

    int count = ft_strlen(p_str);

    printf("%d\n", count);

    return (0);
}

