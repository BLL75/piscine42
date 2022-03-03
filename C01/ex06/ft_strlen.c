/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:25:18 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/17 17:51:38 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	//a = 0;
	while (*str != '\0')
	{
		++str;
		++a;
		//write(1, "----\n", 1);
	}

//	printf("Soy el contador %d: ", a);

	a = 5;

	write(1, str, a);
	//printf ("El numero de caracteres es: %d: \n", a);
	//return (a);
}
