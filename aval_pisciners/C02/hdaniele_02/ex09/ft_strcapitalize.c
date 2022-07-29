/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:10:27 by hdaniele          #+#    #+#             */
/*   Updated: 2022/07/27 23:20:19 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_alpha(char *str, unsigned int c)
{
	if ((str[c] >= 65 && str[c] <= 90) || (str[c] >= 97 && str[c] <= 122))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			y = x + 1;
			if (ft_is_alpha(str, y))
			{
				if (x > 0)
					y = x -1;
				if (y != 1 && ft_is_alpha(str, y))
					y = 0;
				else
					str[x] = str[x] - 32;
			}
		}
		x++;
	}
	return (str);
}
