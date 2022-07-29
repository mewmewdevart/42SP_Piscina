/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:38:18 by anacaro3          #+#    #+#             */
/*   Updated: 2022/07/25 15:56:45 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{

	char str[50] = {"ADFvfvdSSSF"}; //0
	char str2[30] = {"AAAAAA"}; //1

	printf("%d\n" "%d",ft_str_is_uppercase(str), ft_str_is_uppercase(str2));
}
*/
