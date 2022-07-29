#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main ()
{
	printf("%d", ft_strcmp("ABC", "ABC"));
	printf("\n");
	printf("%d", ft_strcmp("ABC", "BC"));
	printf("\n");
	printf("%d", ft_strcmp("ABA", "ABZ"));
}
