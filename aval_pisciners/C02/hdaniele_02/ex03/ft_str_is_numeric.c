/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:37:14 by hdaniele          #+#    #+#             */
/*   Updated: 2022/07/25 16:42:58 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	x;
	int	marker;

	x = 0;
	marker = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 48 && str[x] <= 57)
			marker++;
		x++;
	}
	if (marker != x)
		return (0);
	else
		return (1);
}
