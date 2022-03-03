#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[] = "Hola";
	char src[] = " caracola";

	ft_strcat(dest, src);
	printf("%s", dest);
}
