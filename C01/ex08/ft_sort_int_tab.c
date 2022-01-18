/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 08:36:26 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/10 14:47:39 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	tempKeep;

	i = 0;
	while (i < size - 1)
	{
		n = 0;
		while (n < size - 1)
		{
			if (tab[n] > tab[n + 1])
			{
				tempKeep = tab[n];
				tab[n] = tab[n + 1];
				tab[n + 1] = tempKeep;
			}
			n++;
		}
		i++;
	}
}
