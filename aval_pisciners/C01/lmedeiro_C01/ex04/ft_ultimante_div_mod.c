/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimante_div_mod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:52:10 by lmedeiro          #+#    #+#             */
/*   Updated: 2022/07/26 20:33:00 by lmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}

/*
int main()
{
	int v = 10;
	int z = 2;

	ft_ultimate_div_mod(&v, &z);

	printf("%d %d\n", v, z);
 }	
*/
