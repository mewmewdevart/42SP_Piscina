/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:53:21 by hdaniele          #+#    #+#             */
/*   Updated: 2022/07/25 16:45:26 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;
	int	marker;

	x = 0;
	marker = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 97 && str[x] <= 122)
			marker++;
		x++;
	}
	if (marker != x)
		return (0);
	else
		return (1);
}
