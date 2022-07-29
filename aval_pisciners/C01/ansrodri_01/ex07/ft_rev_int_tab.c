/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:59:33 by ansrodri          #+#    #+#             */
/*   Updated: 2022/07/18 09:29:46 by ansrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	irev;
	int	limite;

	i = 0;
	irev = size - 1;
	limite = size / 2;
	while (i < limite)
	{
		ft_swap(&tab[i++], &tab[irev--]);
	}
}

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
