/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:51:00 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/14 16:38:59 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c);

void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
}

void	ft_putchar(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if ((a == '7') && (b == '8') && (c == '9'))
	{
	}
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	ax;
	int	bx;
	int	cx;

	ax = '0';
	while (ax <= '7')
	{
		bx = ax + 1;
		while (bx <= '8')
		{
			cx = bx + 1;
			while (cx <= '9')
			{
				ft_putchar(ax, bx, cx);
				++cx;
			}
		++bx;
		}
	++ax;
	}
}
