/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:55:19 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/26 11:35:11 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strdup(char *str)
{
	char	*first_index;
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	first_index = (char *) malloc(i * sizeof(char) + 1);
	if (!first_index)
		return (0);
	i = 0;
	while (str[i] != 0)
	{
		*(first_index + i) = *(str + i);
		i++;
	}
	*(first_index + i) = '\0';
	return (first_index);
}
