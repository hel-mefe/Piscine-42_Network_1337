/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:15:07 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/15 17:15:14 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	give_me_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	to_find_length;

	to_find_length = give_me_length(to_find);
	if (to_find_length == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[j + i] == to_find[j])
			{
				if (j == to_find_length - 1)
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
