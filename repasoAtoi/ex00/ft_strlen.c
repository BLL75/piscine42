/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 09:21:53 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/24 09:01:29 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char str[] = "Caracola";
	ft_strlen(str);
	printf("%d", ft_strlen(str));

}*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
