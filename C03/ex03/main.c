#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main ()
{
	char src[] = "Larissa";
	char dest[] = "Xurumila";

	printf("%s", ft_strncat(dest, src, 4));
}

/* 
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int index;
	unsigned int len;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	len = 0;
	while (len < nb && src[len] != '\0')
	{
		dest[index + len] = src[len];
		len++;
	}
	dest[index + len] = '\0';
	return (dest);
} */
