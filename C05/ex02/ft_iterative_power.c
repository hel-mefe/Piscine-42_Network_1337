/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:15:04 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/23 14:27:46 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	output;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	output = 1;
	while (i <= power)
	{
		output *= nb;
		i++;
	}
	return (output);
}
