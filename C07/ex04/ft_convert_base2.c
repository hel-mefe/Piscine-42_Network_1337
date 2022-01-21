/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 10:49:24 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/26 11:18:52 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checking_errors(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// this function returns the index, if it is -1 then it is false
int	in_base(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == a)
			return (i);
		i++;
	}
	return (-1);
}

int	len_counting(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

// how many numbers we are trying to ad
int	numbers_in_heap(int nbr, int base_len)
{
	int	i;

	i = 1;
	while (nbr >= base_len)
	{
		nbr /= base_len;
		i++;
	}
	return (i);
}

void	add_digit_to_string(char *str, char one_digit)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	str[i] = one_digit;
	i++;
	str[i] = '\0';
}
