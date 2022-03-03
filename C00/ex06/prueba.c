#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(void)
{
	int i = 42; 
   
	ft_putchar((i / 10 ) + '0');
	write(1, " ", 1);
	ft_putchar((i % 10) + '0');
  return 0;
}
