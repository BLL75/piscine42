#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "AAAA";
	char s2[] = "AAAC";
	unsigned int n;

	n = 0;

	ft_strncmp(s1, s2, n);
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
}
