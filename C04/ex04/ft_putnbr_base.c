#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char dec[] = "0123456789";
	char bin[] = "01";
	int nbr;

	nbr = 10;
	ft_putnbr_base(nbr, bin);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int	d;
	int b;
	char dec[] = "123456789";
	char bin[] = "01";
//	char hex[] = "0123456789ABCDEF";

	i = 0;
	d = 0;
	while ((base[i] != '\0' && base[i] == dec[d]))
	{
		i++;
		d++;
		if (base[d] < 10  && base[9] == '9')
		{
			//ft_dec(nbr);
			nbr = nbr * 16;
			printf("OK");
		}	
	}
	i = 0;
	b = 0;
	while (base[i] < 2)
	{
		if (base[i] == bin[b])
		{
			i++;
			b++;
		}
	   	if (base[1] == bin[1])
		{
			printf("Función a binario");
		}	

	}
}
