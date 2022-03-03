#include <stdio.h>

int	ft_str_is_printable(char *);

int	main(void)
{
	char str[] = "Printables\n";

	ft_str_is_printable(str);

	printf("%d", ft_str_is_printable(str));
}
