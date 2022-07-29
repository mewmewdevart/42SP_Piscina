#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main ()
{
	char src[] = "larissa";
	char dest[] = "gabriel";

	printf("%s", ft_strncpy(dest, src, 2));
}
