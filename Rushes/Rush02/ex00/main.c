/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:27:18 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/25 13:51:59 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 2 || argc != 3)
		write(1, "Error\n", 6);
	i = 0;
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] <= '0' && argv[1][i] <= '9'))
			write(1, "Error\n", 6);
		i++;
	}
}

//Contando quantidade de dígitos
int	strlength(char *num)
{
	int	i;

	i = 0;
	while (num[i] != '\0')
	{
		i++;
	}
	return (i);
}

//Preenchimento para múltiplos de três
void	roundnum(char *num, int digits)
{
	if (digits % 3 == 1)
		*num = "00" + *num;
	else if (digits % 3 == 2)
		*num = "0" + *num;
}
