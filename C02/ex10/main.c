#include <stdio.h>

unsigned int	ft_strlcpy (char *dest, char *src, unsigned int size);

int	main()
{
	char dest[] = "";
	char src[] = "tomatera";
	unsigned int size;

	size = 6;

	ft_strlcpy (dest, src, size);
	printf("%d", ft_strlcpy(dest, src, size));
}
