/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:39:26 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/14 17:46:41 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	base_16(int nb)
{
	char	x[3];
	char	*strBase16;

	strBase16 = "0123456789abcdef";
	x[0] = '\\';
	x[1] = strBase16[nb / 16];
	x[2] = strBase16[nb % 16];
	write (1, x, 3);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	indexChar;
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		indexChar = str[i];
		if (indexChar < 32 || indexChar >= 127)
		{
			base_16(indexChar);
		}
		else
		{
			write (1, &indexChar, 1);
		}
		i++;
	}
}
