/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:55:49 by anacaro3          #+#    #+#             */
/*   Updated: 2022/07/25 15:55:53 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{

	char str[50] = {"12354"};
	char str2[30] = {"1teste2"};

	printf("%d\n"
		   "%d",
		   ft_str_is_numeric(str), ft_str_is_numeric(str2));
}
*/
