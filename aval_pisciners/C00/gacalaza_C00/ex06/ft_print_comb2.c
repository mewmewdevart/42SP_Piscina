/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacalaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:11:44 by gacalaza          #+#    #+#             */
/*   Updated: 2022/07/19 14:59:52 by gacalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(int c);

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print(n1);
			write(1, " ", 1);
			ft_print(n2);
			if (!(n1 == 98))
				write(1, ", ", 2);
			if (n1 == 98 && n2 == 99)
				break ;
			n2++;
		}
		++n1;
	}
}

void	ft_print(int c)
{
	char	d;
	char	u;

	d = (c / 10) + '0';
	write(1, &d, 1);
	u = (c % 10) + '0';
	write(1, &u, 1);
}	
