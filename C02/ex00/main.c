#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main ()
{
	char src[] = "queijinho";
	char dest[] = "cake";

	printf("%s", ft_strcpy(dest, src));

	return (0);
}
