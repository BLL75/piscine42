/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drepetto <drepetto@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 09:37:28 by drepetto          #+#    #+#             */
/*   Updated: 2022/02/27 18:45:59 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*ft_strlen(int ac, char **av);
void	ft_putchar(char c);

int main (int ac, char **av)
{
	int	fd;
	char buf[100];
	int	nr_bytes;

	fd = open("dicc", O_RDONLY);

	nr_bytes = read (fd, &buf, sizeof(char));
	printf("%s\n", ft_strlen(ac, av));
	while(nr_bytes > 0)
	{
		
		nr_bytes = read (fd, &buf, sizeof(char));	
	}
		close(fd);
		return 0;
}

char	*ft_strlen(int ac, char **av)
{
	int i;
	char *compare;

	compare = (char *) malloc (sizeof(av));
	
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= '0' && av[1][i] <= '9')
			{
				compare[i] = av[1][i];
				i++;
			}
			else
			{
				write(1, "Error", 5);
				return (0);
			}

		}
		return (compare);	
	}
	else
	{
		write(1, "Error\n", 6);
			return (0);
	}	
}
