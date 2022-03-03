/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   probando.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 07:21:43 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/16 08:15:23 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	int *ptr;
	
	a = 45;

	ptr = *a;
	printf("Muestra contenido: %i\n", *ptr);

	printf("Muestra dirección del puntero %p\n", &ptr);

	*ptr = 99;

	printf("Se ha modificado valor de variable a mediante el puntero: %d\n", a);
	printf("Y la dirección de memoria sigue siendo la misma %p\n", &ptr);

	b = 88;
	
	ptr = &b;

	printf("Se cambia valor de puntero y ahora apunta hacía b: %p\n", &ptr);
	printf("Muestra el valor de b %d\n", *ptr);

	*ptr = 222;

	printf("Ahora el cambio a distancia ha sido con b: %d\n", b);
	
	return (0);
}
