#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 20;
	b = 30;

	printf("El a = %d y b = %d\n", a, b);

	ft_swap(&a, &b);

	printf("Ahora a = %d y b = %d\n", a, b);
}
