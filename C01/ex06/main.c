#include <stdio.h>

int ft_strlen(char *str);

int main ()
{
	char *c="Hello";
	printf("%d", ft_strlen(c));
}

/* 
int ft_strlen(char *str)
{
	int i;

	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return(i);
} */
