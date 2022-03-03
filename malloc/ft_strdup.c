#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	if (src[i] == '\0')
		return (0);
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
	free(dest);
}

void	ft_putstr(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		write (1, &src[i], 1);
		i++;
	}
}

int	main (int argc, char **argv)
{
	int i;
	//char *dest;

	i = 0;
	if (argc ==  1)papa
	{
		return (0);
	}
	while (argv[i])
	{
		ft_putstr(ft_strdup(argv[i]));
		i++;
		ft_putstr("\n");
	}
}
