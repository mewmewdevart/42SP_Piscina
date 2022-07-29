/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:43:04 by larcrist          #+#    #+#             */
/*   Updated: 2022/07/28 04:05:55 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	sup;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	sup = 0;
	while (src[sup] != '\0')
	{
		dest[index] = src[sup];
		index++;
		sup++;
	}
	dest[index] = '\0';
	return (dest);
}
