/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 06:14:27 by larcrist          #+#    #+#             */
/*   Updated: 2022/07/17 02:35:13 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	positive = 'P';
	negative = 'N';
	if (n >= 0)
		write(1, &positive, 1);
	else if (n < 0)
		write(1, &negative, 1);
}
