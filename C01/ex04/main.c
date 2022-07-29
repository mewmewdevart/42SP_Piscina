#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main ()
{
	int a;
	int b;

	a = 10;
	b = 25;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
}

/*
void ft_ultimate_div_mod(int *a, int *b)
{
	int recep_swap;
	
	recep_swap = *a;
	*a = *a / *b;
	*b = recep_swap % *b;
}
*/
