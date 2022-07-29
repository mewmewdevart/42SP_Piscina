/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 04:34:42 by larcrist          #+#    #+#             */
/*   Updated: 2022/07/29 05:17:01 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	index;

	index = 0;
	while (argv[0][index] != '\0' && argc)
	{
		ft_putchar(argv[0][index]);
		index++;
	}
	write(1, "\n", 1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
