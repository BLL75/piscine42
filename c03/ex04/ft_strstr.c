/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:35:03 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/22 16:35:58 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	f;

	s = 0;
	f = 0;
	if (to_find[f] == '\0')
	{
		return (str);
	}
	while (str[s] != '\0')
	{
		f = 0;
		while ((str[s + f] == to_find[f]) && (to_find[f] != '\0'))
		{
			if (to_find[f + 1] == '\0')
			{
				return (&str[s]);
			}
			f++;
		}
		s++;
	}
	return (NULL);
}
