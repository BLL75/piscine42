/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:24:08 by bluque-l          #+#    #+#             */
/*   Updated: 2022/03/03 12:42:23 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%d", ft_recursive_factorial(7));
}*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		return (nb *(ft_recursive_factorial(nb - 1)));
	}
	return (1);
}
