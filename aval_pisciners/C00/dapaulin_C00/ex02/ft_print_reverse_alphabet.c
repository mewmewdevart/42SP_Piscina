/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_caracter.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:03:06 by dapaulin          #+#    #+#             */
/*   Updated: 2022/07/24 01:58:55 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	caracter;

	caracter = 'z';
	while (caracter >= 'a')
	{
		ft_putchar(caracter);
		caracter--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
