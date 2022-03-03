/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:45:46 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/26 16:47:09 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 3;
	//ft_iterative_power(nb, power);
	printf("%d\n", ft_iterative_power(nb, power));	
}*/

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		res = 0;
		return (res);
	}
	if (power == 0)
	{
		res = 1;
		return (res);
	}
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
