/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 08:39:24 by ansrodri          #+#    #+#             */
/*   Updated: 2022/07/18 08:42:44 by ansrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_invert(int *a, int *b);
void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < (size - 1))
		{
			if (tab[y] > tab[y + 1])
				ft_invert(&tab[y], &tab[y + 1]);
				y++;
		}
		x++;
	}
}

void	ft_invert(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
