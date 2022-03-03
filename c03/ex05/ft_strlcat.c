/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:47:00 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/23 13:38:58 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	d;
	unsigned int	s;
	unsigned int				len;

	d = 0;
	s = 0;
	len = ft_strlen(src);
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0' && s < (size -1))
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	if (len < size)
	{
		return (d + len);
	}
	else if (len > size)
	{
		return (d + size);
	}
}
