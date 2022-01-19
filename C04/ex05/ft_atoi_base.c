/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:20:45 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/25 14:35:50 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	need_length_asap(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	check_errors(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
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

int	check_minus(char *str, int start_from)
{
	int	i;
	int	many_minus;

	i = start_from;
	many_minus = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			many_minus++;
		i++;
	}
	if (many_minus % 2 == 1)
		return (-1);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;
	int	index;

	if (check_errors(base) == 0)
		return (0);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = check_minus(str, i);
	while (str[i] == '-' || str[i] == '+')
		i++;
	result = 0;
	base_len = need_length_asap(base);
	while (str[i] != 0)
	{
		index = in_base(str[i], base);
		if (index == -1)
			break ;
		result = result * base_len + index;
		i++;
	}
	return (result * sign);
}
