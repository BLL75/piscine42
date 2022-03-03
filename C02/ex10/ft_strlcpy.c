/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bluque-l <bluque-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:10:11 by bluque-l          #+#    #+#             */
/*   Updated: 2022/02/21 09:54:46 by bluque-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int	count;

	i = 0;
	count = 0;
	while (((src[i] != '\0') && i < (size -1)))
	{
		dest[i] = src[i];
		i++;
		count++;
	}
	dest[i] = '\0';
	return (count);
}
