#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	
	unsigned int nb;
	char dest[] = "Hola";
	char src[] = " caracola";

	nb = 5;

	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
}
