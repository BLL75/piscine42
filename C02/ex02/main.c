#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char cadena[] = "tonto8ron";

	ft_str_is_alpha(cadena);

	printf("%d", ft_str_is_alpha(cadena));
}
