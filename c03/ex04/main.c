#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main (void)
{
	char str[] = "El que no quiera el dia de la marmota";
	char to_find[] = "dia";

	//ft_strstr(str, to_find);
	printf("%s", ft_strstr(str, to_find));
}
