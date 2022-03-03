/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:27:32 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/23 12:44:33 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	s;
	unsigned int	d;
//	unsigned int	count;

	d = 0;
	s = 0;
	//count = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0' && s < nb)
	{
		dest[d] = src[s];
		d++;
		s++;
		//count++;
	}
	dest[d] = '\0';
	return (dest);
}
