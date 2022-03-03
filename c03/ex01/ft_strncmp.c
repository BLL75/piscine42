/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:20:04 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/23 08:45:27 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	count;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	count = 0;
	while ((s1[i] == s2[i])
		&& (s1[i] != '\0' && s2[i] != '\0')
		&& (count < n -1))
	{
			count++;
			i++;
	}
	return (s1[i] - s2[i]);
}
