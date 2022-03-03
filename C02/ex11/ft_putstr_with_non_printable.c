#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert_hexa(char *str)
{
	int i;
	int res;
	int hex;
	char *allhex;

	allhex = "0123456789ABCDEF";
	i = 0;
	while (str[i] >= 16)
	{
		res = str[i] / 16;
		hex = ((res % 16) * 16);
		write(1, "\\", 1);
		str[i] = allhex[hex];
	}
		
	
}
*void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
	{
		return (0);
	}
	while(str[i] != '\0')
	{
		if ((str[i] >= 127 && str[i] <= 255)
			|| (str[i] >= 0 && str[i] <=31))
		{
			convert_hexa(str);	
		}

	}
}
