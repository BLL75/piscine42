#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "ani45454ma¿?=)/&(l";

	ft_strupcase(str);

	printf("%s", str);
}
