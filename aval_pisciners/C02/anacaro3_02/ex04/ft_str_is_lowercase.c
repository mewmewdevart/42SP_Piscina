/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:18:47 by anacaro3          #+#    #+#             */
/*   Updated: 2022/07/25 15:38:36 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	char str2[30] = {"minusculas"}; //1

	printf("%d\n" "%d",ft_str_is_lowercase(str), ft_str_is_lowercase(str2));
}
*/
