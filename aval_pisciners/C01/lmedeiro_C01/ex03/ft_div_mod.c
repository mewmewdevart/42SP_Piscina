/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:30:32 by lmedeiro          #+#    #+#             */
/*   Updated: 2022/07/27 15:54:25 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


int main()
{
	int x = 10;
	int y = 2;
	int div;
	int mod;	
	int *pointer1;
	int *pointer2;

	pointer1 = &div;
	pointer2 = &mod;

	ft_div_mod(x, y, pointer1, pointer2);
	printf("%d %d\n", *pointer1, *pointer2);
	printf("Endereço da variavel apontada: %p\n  %p\n", pointer1, pointer2);
	printf("Endereço da variavel apontada: %p\n  %p\n", &div, &mod);
	printf("Endereço dos ponteiros: %p\n %p\n", &pointer1, &pointer2);
}

