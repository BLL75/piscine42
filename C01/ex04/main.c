#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a;
	int b;
	
	a = 20;
	b = 5;
	ft_ultimate_div_mod(&a, &b);

	printf("Primero el resultado: %d\n", a);
	printf("Segundo me saca el resto: %d\n", b);
}
