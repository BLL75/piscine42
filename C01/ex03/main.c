#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 10;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("El resultado de la división es: %d\n", div);
	printf("El resto de la división es: %d\n", mod);

	

}
