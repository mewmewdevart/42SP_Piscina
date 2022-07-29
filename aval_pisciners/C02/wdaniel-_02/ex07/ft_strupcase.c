/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:58:10 by wdaniel-          #+#    #+#             */
/*   Updated: 2022/07/27 21:24:44 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	string1[] = "Oba, temos chocolate 90%";
	printf("%s\n", string1);
	ft_strupcase(string1);
	printf("%s\n", string1);
	return (0);
}*/
