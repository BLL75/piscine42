/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:56:35 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/28 10:56:22 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str);
char	*convert_lowercase(char *str);

/*int	main(void)
{
	char str[] = "aaa ++ klajgf kasdk lalaE";
	printf("%s", ft_strcapitalize(str));
}*/

char	*convert_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	convert_lowercase(str);
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z')
			&& (str[i] < '0' || str[i] > '9'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
				i++;
			}
		}
		i++;
	}	
	return (str);
}
