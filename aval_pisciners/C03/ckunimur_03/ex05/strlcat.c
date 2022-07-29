/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:12:42 by ckunimur          #+#    #+#             */
/*   Updated: 2022/07/28 03:16:01 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	while (src[j] != '\0' && j < size - 1)
	{
		dest[i + j] = src[j];
	j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}

#include <stdio.h>

int main()
	{
	char a[] = "Maria";
	char b[] = " Clara";
	printf("%d", (ft_strlcat(a, b, 4)));
	printf("%s", a);
	return 0;
	}
