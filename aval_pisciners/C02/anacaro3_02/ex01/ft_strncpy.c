/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 02:10:09 by anacaro3          #+#    #+#             */
/*   Updated: 2022/07/27 20:55:03 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((src[c] != '\0') && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

int main(void)
{
	char src[5] = "nada";
	char dest[6];

	printf("%s", ft_strncpy(dest, src, 2));
	/*
	char *p_string_src = src;
	char *p_string_dest = dest;

	printf(ft_strncpy(p_string_dest, p_string_src));
	printf(ft_strncpy(p_string_dest, p_string_src));
*/
}

