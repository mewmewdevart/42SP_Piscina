/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:02:24 by anacaro3          #+#    #+#             */
/*   Updated: 2022/07/27 20:50:40 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int main(void)
{
	char src[5] = "nada";
	char dest[6];

	char *p_string_src = src;
	char *p_string_dest = dest;

	printf("%s\n", p_string_dest); // vazia
	ft_strcpy(p_string_dest, p_string_src);
	//printf(strcpy(p_string_dest, p_string_src));
	printf("%s", p_string_dest); // texto do destino
}

/* norminette
norminette -R CheckForbiddenSourceHeader

compilar
gcc -Wall -Werror -Wextra *.c && ./a.out
*/
