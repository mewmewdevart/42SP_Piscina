/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:38:18 by anacaro3          #+#    #+#             */
/*   Updated: 2022/07/27 21:01:59 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{

	char str[50] = {"ADFvfv\15dSSSF"}; //0
	char str2[30] = {"AAAAAA\10"}; //1

	printf("%d\n" "%d",ft_str_is_printable(str), ft_str_is_printable(str2));
}

