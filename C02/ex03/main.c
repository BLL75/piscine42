#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str[] = "2343f43";

	ft_str_is_numeric(str);
	printf("%d", ft_str_is_numeric(str));
}
