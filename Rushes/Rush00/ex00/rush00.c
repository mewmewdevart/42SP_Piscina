/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:25:24 by larcrist          #+#    #+#             */
/*   Updated: 2022/07/11 13:21:43 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	imprimeComBolinha(int n_col);
void	imprimeComPipe(int n_col, int n_line);

void	rush(int x, int y)
{
	int	n_col;
	int	n_line;
	int	k;

	n_col= x;
	n_line= y;

	if(n_line && n_col < 0)
	{
		return;
	}
	imprimeComBolinha(n_col);
	k = 0;
	while(k < n_line)
	{
		imprimeComPipe(n_col, n_line);
		k=k+1;
	}
	if(n_line != 1)
		imprimeComBolinha(n_col);
}

void imprimeComBolinha(int n_col){
	int i ;
	i=0;

	while(i < n_col) {
		if (i == 0 || i == n_col-1) 
			ft_putchar('o');
		 else 
			ft_putchar('-');
		i = i+1;
	}
	ft_putchar('\n');

	}

void imprimeComPipe(int n_col, int n_line)
{
	int j ;
	j=0;
//numero de vezes e linha
	while (j < n_col) {
		if (j == 0 || j  == n_col-1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		j = j+1;
	}
	ft_putchar('\n');
}
