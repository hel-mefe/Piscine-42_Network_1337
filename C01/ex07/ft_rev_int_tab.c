/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:44:33 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/10 15:15:16 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	length;
	int	temp;

	i = 0;
	length = size - 1;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + (length - i));
		*(tab + (length - i)) = temp;
		i++;
	}
}
