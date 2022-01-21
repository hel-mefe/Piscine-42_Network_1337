/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 09:05:27 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/26 11:31:57 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		checking_errors(char *base);
int		in_base(char a, char *base);
int		len_counting(char *str);
int		numbers_in_heap(int nbr, int base_len);
void	add_digit_to_string(char *str, char one_digit);

//converting to decimal FIRST STEP
int	convert_to_decimal(char *nbr, char *base)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (nbr[i] != 0)
	{
		if (in_base(nbr[i], base) != -1)
			result = result * len_counting(base) + in_base(nbr[i], base);
		else
			break ;
		i++;
	}
	return (result * sign);
}

void	fulfill_indexes(int nbr, char *base_to, char *converted)
{
	int	base_len;

	base_len = len_counting(base_to);
	if (nbr < 0)
	{
		nbr = -nbr;
		add_digit_to_string(converted, '-');
	}
	if (nbr >= base_len)
	{
		fulfill_indexes(nbr / base_len, base_to, converted);
		fulfill_indexes(nbr % base_len, base_to, converted);
	}
	else if (nbr < base_len)
		add_digit_to_string(converted, base_to[nbr]);
}

//converting to base system SECOND STEP
char	*convert_to_base_system(int	nbr, char *base_to)
{
	int		base_to_len;
	char	*converted;
	int		many_indexes;

	base_to_len = len_counting(base_to);
	many_indexes = numbers_in_heap(nbr, base_to_len);
	if (nbr < 0)
	{
		converted = (char *) malloc(many_indexes * sizeof(char)
				+ (2 * sizeof(char)));
	}
	else
		converted = (char *) malloc(many_indexes * sizeof(char) + sizeof(char));
	*converted = '\0';
	fulfill_indexes(nbr, base_to, converted);
	return (converted);
}

//main function we're working with
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal;
	char	*converted_to_base_system;

	if (checking_errors(base_from) && checking_errors(base_to))
	{
		decimal = convert_to_decimal(nbr, base_from);
		converted_to_base_system = convert_to_base_system(decimal, base_to);
	}
	else
		return (0);
	return (converted_to_base_system);
}
