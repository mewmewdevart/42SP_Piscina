/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpourenc <vpourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:44:01 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/07/29 05:05:07 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int	minus;

	if (nb < 0)
	{
		ft_putchar('-');
		minus = -nb;
		ft_putnbr(minus);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int    main(void)
{

    //printf(" (printed) should be ");
    ft_putnbr(42);
    return (0);

}

