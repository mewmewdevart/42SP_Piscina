/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:58:19 by anacaro3          #+#    #+#             */
/*   Updated: 2022/07/27 21:05:40 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int				i;
	int				first;
	unsigned char	c;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (first == 1 && c >= 'a' && c <= 'z')
		{
			str[i] = c - 32;
		}
		if (first == 0 && c >= 'A' && c <= 'Z')
		{
			str[i] = c + 32;
		}
		first = 0;
		if (c == ' ' || c == '-' || c == '+')
		{
			first = 1;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char x[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(x));
}
