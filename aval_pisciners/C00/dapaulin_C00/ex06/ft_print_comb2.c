/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:36:40 by dapaulin          #+#    #+#             */
/*   Updated: 2022/07/24 01:57:04 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_number(int number1, int number2);

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	number2 = 0;
	while (number1 < 99)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			print_number(number1, number2);
			number2++;
		}
		number1++;
	}	
}

void	print_number(int number1, int number2)
{
	ft_putchar(((number1 / 10) % 10) + '0');
	ft_putchar((number1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar(((number2 / 10) % 10) + '0');
	ft_putchar((number2 % 10) + '0');
	if (!(number1 == 98 && number2 == 99))
		write(1, ", ", 2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
