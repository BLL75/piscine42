#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[] = "Hola";
	char src[] = " caracola";
	unsigned int	size;

	size = 6;
	printf("%u\n", ft_strlcat(dest, src, size));

	printf("%u\n", strlcat(dest, src, size));
}
