/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:55:34 by larcrist          #+#    #+#             */
/*   Updated: 2022/07/23 21:08:34 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr);

int main ()
{
	int *nbr;
	int number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d\n", number);
	printf("%p\n", nbr);
	printf("%x",(unsigned int) nbr);
}

/*
void ft_ft(int *nbr)
{
	*nbr=42;
} */
