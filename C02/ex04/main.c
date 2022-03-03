#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char str[] = "ho3563a";

	ft_str_is_lowercase(str);

	printf("%d", ft_str_is_lowercase(str));
}
