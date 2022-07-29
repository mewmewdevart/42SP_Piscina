/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 05:16:35 by larcrist          #+#    #+#             */
/*   Updated: 2022/07/28 01:52:54 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putstr(char *str);

int main ()
{
	char *c = "Hello";

	ft_putstr(c);
}


void ft_putstr(char *str)
{
	int i; //Controlador

	i=0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;  
	}
}
