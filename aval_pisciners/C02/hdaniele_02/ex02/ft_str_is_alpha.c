/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:06:44 by hdaniele          #+#    #+#             */
/*   Updated: 2022/07/27 23:16:57 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	x;
	int	marker;
	int	key;

	key = 0;
	marker = 0;
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
			marker++;
		if (str[x] >= 97 && str[x] <= 122)
			marker++;
		x++;
	}
	if (marker == x && key == 0)
		return (1);
	else
		return (0);
}
