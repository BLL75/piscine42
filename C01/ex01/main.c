/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:47:26 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/16 10:04:40 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int a;
	
	int *p;
	int **p2;
	int ***p3;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;
	int *********p9;

	p9 = &p8;
	p8 = &p7;
	p7 = &p6;
	p6 = &p5;
	p5 = &p4;
	p4 = &p3;
	p3 = &p2;
	p2 = &p;
	p = &a;

	ft_ultimate_ft(p9);

	printf("%d\n", a);
}
