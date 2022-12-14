/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:30:47 by rleslie-          #+#    #+#             */
/*   Updated: 2022/07/27 22:24:24 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (stc[n] != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
