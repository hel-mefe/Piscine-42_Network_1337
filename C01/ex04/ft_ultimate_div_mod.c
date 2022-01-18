/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate-div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 08:26:18 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/10 14:54:19 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resDiv;
	int	resRemainder;

	resDiv = *(a) / *(b);
	resRemainder = *(a) % *(b);
	*(a) = resDiv;
	*(b) = resRemainder;
}
