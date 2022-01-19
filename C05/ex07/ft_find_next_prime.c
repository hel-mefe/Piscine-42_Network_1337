/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:56:16 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/23 16:57:12 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_it_prime_number(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next_prime;

	if (nb > 2)
	{
		next_prime = nb;
		if (is_it_prime_number(next_prime))
			return (next_prime);
		else
		{
			while (!(is_it_prime_number(next_prime)))
			{
				next_prime++;
			}
			return (next_prime);
		}
	}
	return (2);
}
