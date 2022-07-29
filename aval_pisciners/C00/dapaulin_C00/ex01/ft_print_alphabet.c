/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:50:05 by dapaulin          #+#    #+#             */
/*   Updated: 2022/07/24 01:57:45 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	caracter;

	caracter = 'a';
	while (caracter <= 'z')
	{
		ft_putchar(caracter);
		caracter++;
	}	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
