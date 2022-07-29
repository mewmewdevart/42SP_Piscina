/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:33:12 by fsuomins          #+#    #+#             */
/*   Updated: 2022/07/27 21:58:28 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) || (s1[i] != '\0')
		   	&&  (s2[i] != '\0'))
	{
		if (i < n)
			i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	printf("%d", ft_strncmp("Hello", "HelloWorld", 8));
}

