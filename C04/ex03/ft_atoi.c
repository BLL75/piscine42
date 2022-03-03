/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:23:23 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/24 09:25:25 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_atoi(char *str);
int	ft_pos_or_neg(char *str);

int	main(void)
{
	char str[] = "++-+aa432a--a888";
	printf("%d\n", ft_atoi(str));
}*/

int	ft_pos_or_neg(char *str)
{
	int	i;
	int	p;
	int	n;

	i = 0;
	p = 0;
	n = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '+')
			p++;
		if (str[i] == '-')
			n++;
		i++;
	}
	if (p < n)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	pn;

	i = 0;
	r = 0;
	if (str[i] == '\0')
	{
		return (0);
	}
	pn = ft_pos_or_neg(str);
	while (str[i] < '0' || str[i] > '9')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (str[i] - '0') + r * 10;
		i++;
	}
	if (pn == 1)
	{
		return (r * -1);
	}
	return (r);
}
