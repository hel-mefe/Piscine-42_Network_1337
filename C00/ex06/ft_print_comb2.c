/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:08:28 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/09 16:52:53 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	printDigit(char a)
{
	write (1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{	
		b = a + 1;
		while (b <= 99)
		{
			printDigit (a / 10 + '0');
			printDigit (a % 10 + '0');
			write (1, " ", 1);
			printDigit (b / 10 + '0');
			printDigit (b % 10 + '0');
			if (a != 98)
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
