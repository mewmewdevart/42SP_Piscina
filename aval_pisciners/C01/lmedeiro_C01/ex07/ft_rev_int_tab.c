/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:54:07 by lmedeiro          #+#    #+#             */
/*   Updated: 2022/07/26 20:44:09 by lmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aloc;

	i = 0;
	while (i < (size / 2))
	{
		aloc = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = aloc;
		i++;
	}
}

/*
int main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};

	int size = 6;

	ft_rev_int_tab(tab, size);

	printf("%d %d  %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
*/
