#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[] = "car";
	char	src[] = "abcdef";

	unsigned int n;

	n = 3;

			
	ft_strncpy(dest, src, n);
	return (0);
	//write(1, &dest, 5);
}
