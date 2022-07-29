/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:15:23 by hdaniele          #+#    #+#             */
/*   Updated: 2022/07/25 17:06:55 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	x;
	int	marker;

	x = 0;
	marker = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 32 && str[x] <= 127)
			marker++;
		x++;
	}
	if (marker != x)
		return (0);
	else
		return (1);
}
