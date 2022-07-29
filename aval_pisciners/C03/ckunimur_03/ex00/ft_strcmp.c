/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:49:25 by ckunimur          #+#    #+#             */
/*   Updated: 2022/07/28 02:03:16 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	return (s1[i] - s2[i]);
}


#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    char s1 [] = "banana";
	char s2 [] = "bananeira";
	
	int s3 = ft_strcmp(s1, s2);
	printf("%d", s3);
	return (0);
}
