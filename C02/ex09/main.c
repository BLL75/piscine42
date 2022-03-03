#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	//char str[] = "salut, clel LIRUs ? 42mots;; quKKKarante-deux; cinguante+et+un";	
	char str[] = "   Ak -- KK; J;;Ablklja''¡¡el 33lol aºººª9¿!!!L +UUu+ii+aa";
	ft_strcapitalize(str);
	printf("%s", str);
}
