/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:00:09 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/09 16:54:41 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			ft_putchar ('-');
		}
		if (nb < 10)
		{
			ft_putchar (nb + '0');
		}
		else if (nb >= 10)
		{
			ft_putnbr (nb / 10);
			ft_putnbr (nb % 10);
		}
	}
}
