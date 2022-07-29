/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:48:53 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/19 15:31:14 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(char c1, char c2, char c3);

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0';
	c2 = '0';
	c3 = '0';
	while (c1 < '8')
	{
		c2 = c1 + 1;
		while (c2 < '9' && c2 > c1)
		{
			c3 = c2 + 1;
			while (c3 <= '9' && c3 > c2)
			{
				ft_print_numbers(c1, c2, c3);
				++c3;
			}	
		++c2;
		}
	++c1;
	}	
}

void	ft_print_numbers(char c1, char c2, char c3)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (! (c1 == '7' && c2 == '8' && c3 == '9'))
		write(1, ", ", 2);
}
