/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:17:27 by dapaulin          #+#    #+#             */
/*   Updated: 2022/07/23 17:17:11 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_numbers(char hundred, char ten, char unity);
void	add_for_hundred(char *p_hundred, char *p_ten, char *p_unity);
int		finish(char h, char t, char u);

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unity;

	hundred = '0';
	ten = '1';
	unity = '2';
	while (1)
	{
		if (unity < '9')
		{
			print_numbers(hundred, ten, unity);
			unity++;
		}
		else if (ten < '9' && unity == '9')
		{
			print_numbers(hundred, ten, unity);
			ten++;
			add_for_hundred(&hundred, &ten, &unity);
		}
		else
		{
			return ;
		}
	}	
}

void	add_for_hundred(char *p_hundred, char *p_ten, char *p_unity)
{
	if (*p_ten == '9' && *p_unity == '9')
	{
		*p_hundred = *p_hundred + 1;
		*p_ten = *p_hundred + 1;
		*p_unity = *p_ten + 1;
	}
	else
		*p_unity = *p_ten + 1;
}

void	print_numbers(char hundred, char ten, char unity)
{
	ft_putchar(hundred);
	ft_putchar(ten);
	ft_putchar(unity);
	if (hundred == '7' && ten == '8' && unity == '9')
		return ;
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
