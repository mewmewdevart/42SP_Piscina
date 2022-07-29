/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 05:15:23 by larcrist          #+#    #+#             */
/*   Updated: 2022/07/29 05:24:20 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

int main(int argc, char *argv[])
{
		ft_putchar(argv[0][0]);
	

	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}


