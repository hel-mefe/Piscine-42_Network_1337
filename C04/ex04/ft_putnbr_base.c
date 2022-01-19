/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:54:14 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/20 09:30:27 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_character(char c)
{
	write(1, &c, 1);
}

int	checking_errors(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[i] != '\0' && base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

unsigned int	give_me_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	number;

	base_len = give_me_length(base);
	number = nbr;
	if (checking_errors(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			print_character('-');
			number = nbr;
		}
		if (number < base_len)
			print_character(base[number]);
		else if (number >= base_len)
		{
			ft_putnbr_base((number / base_len), base);
			ft_putnbr_base((number % base_len), base);
		}
	}
}
