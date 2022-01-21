/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 08:33:53 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/26 11:35:34 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*min_max;
	int	size;

	if (min >= max)
		return (0);
	else
	{
		size = max - min;
		min_max = (int *) malloc(size * sizeof(int));
		i = 0;
		while (min < max)
		{
			*(min_max + i) = min;
			min++;
			i++;
		}
	}
	return (min_max);
}
