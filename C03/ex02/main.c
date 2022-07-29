#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main ()
{
	char src[] = "queijo";
	char dest[] = "tomate";

	printf("%s", ft_strcat(dest, src));
}
