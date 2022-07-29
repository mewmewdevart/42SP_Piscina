/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:39:58 by dapaulin          #+#    #+#             */
/*   Updated: 2022/07/23 18:34:46 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_number(unsigned int rev_num, int places);

void	ft_putnbr(int nb)
{
	int				div;
	int				mod;
	int				places;
	unsigned int	new_number;
	unsigned int	rever_number;	

	if (nb < 0)
	{
		write(1, "-", 1);
		new_number = nb * -1;
	}
	else
		new_number = nb;
	rever_number = 0;
	places = 0;
	while (new_number > 0)
	{
		places++;
		div = new_number / 10;
		mod = new_number % 10;
		rever_number *= 10;
		rever_number += mod;
		new_number = div;
	}
	print_number(rever_number, places);
}

void	print_number(unsigned int rev_num, int places)
{
	int	div;

	if (places == 0)
		ft_putchar('0');
	while (places > 0)
	{
		div = rev_num / 10;
		ft_putchar((rev_num % 10) + '0');
		rev_num = div;
		places--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
