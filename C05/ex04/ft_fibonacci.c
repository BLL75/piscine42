#include <stdio.h>
int	ft_fibonacci(int index);

int	main(void)
{
	int index;

	index = 23;
	ft_fibonacci(index);
	printf("%d\n", ft_fibonacci(index));
}

int	ft_fibonacci(int index)
{
	
	if (index == 0)
	    return (0);	
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}
