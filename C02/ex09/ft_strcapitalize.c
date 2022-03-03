/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:56:35 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/22 13:02:51 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*convert_lowercase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	convert_lowercase(str);
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] -32;
		}
		while ((str[i] < 'a' || str[i] > 'z')
				|| (str[i] < '0' || str[i] > '9'))
		{
			i++;
		}
		if (str[i] <= 'a' && str[i] >= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;	
	}
	return (str);
}
