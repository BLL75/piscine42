#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	ft_recursive_power(2, 2);	
}

int	ft_recursive_power(int nb, int power)
{

	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, --power));
	}

}
