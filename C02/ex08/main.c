#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "HOLaAAoOoOoO99+`çfdasdf´";

	ft_strlowcase(str);
	printf("%s", ft_strlowcase(str));
}
