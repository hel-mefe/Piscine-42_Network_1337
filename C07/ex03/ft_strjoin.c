/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 08:02:14 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/26 11:35:52 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_counting(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	indexes_to_allocate(int size, char **strs)
{
	int	many_indexes;
	int	i;
	int	n;

	i = 0;
	many_indexes = 0;
	while (i < size)
	{
		n = 0;
		while (strs[i][n] != 0)
		{
			n++;
			many_indexes++;
		}
		i++;
	}
	return (many_indexes);
}

char	cat_string(char *str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	j = 0;
	while (str1[j] != 0)
	{
		str[i] = str1[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (*str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat_str;
	int		a;

	if (size == 0)
	{
		cat_str = (char *) malloc (sizeof(char));
		*cat_str = '\0';
		return (cat_str);
	}
	cat_str = (char *) malloc((indexes_to_allocate(size, strs)
				+ len_counting(sep) * (size - 1)) * sizeof(char) + 1);
	a = 0;
	*cat_str = '\0';
	while (a < size)
	{
		*cat_str = cat_string(cat_str, strs[a]);
		a++;
		if (a == size)
			break ;
		*cat_str = cat_string(cat_str, sep);
	}
	return (cat_str);
}
