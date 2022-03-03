/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:09:50 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/24 12:11:31 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	ft_iterative_factorial(20);
	printf("%d", ft_iterative_factorial(7));
}*/

int	ft_iterative_factorial(int nb)
{
	int	mult;
	int	res;

	mult = 1;
	res = 1;
	while (mult <= nb)
	{
		res = res * mult;
		mult++;
	}
	return (res);
}
