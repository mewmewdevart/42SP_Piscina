/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:11:57 by hdaniele          #+#    #+#             */
/*   Updated: 2022/07/25 17:12:21 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;
	int	marker;

	x = 0;
	marker = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
			marker++;
		x++;
	}
	if (marker != x)
		return (0);
	else
		return (1);
}
