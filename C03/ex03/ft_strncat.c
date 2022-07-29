/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 04:13:00 by larcrist          #+#    #+#             */
/*   Updated: 2022/07/28 04:18:25 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	len;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	len = 0;
	while (len < nb && src[len] != '\0')
	{
		dest[index + len] = src[len];
		len++;
	}
	dest[index + len] = '\0';
	return (dest);
}
