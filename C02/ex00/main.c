#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);


int	main(void)
{

	char	dest[] = "";
	char	src[] = "Copiado";
	
	ft_strcpy(dest, src);
	write(1, &dest, 1);
			

}
