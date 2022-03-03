#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "ZY";
	char s2[] = "ZZ";

	ft_strcmp(s1, s2);
	printf("%d\n", ft_strcmp(s1, s2));
}
