/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:50:32 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/15 18:41:29 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	give_me_length(char *string)
{
	unsigned int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	available_indexes;

	i = 0;
	dest_length = give_me_length(dest);
	src_length = give_me_length(src);
	if (size <= dest_length)
		return (size + src_length);
	available_indexes = size - dest_length - 1;
	while (src[i] != '\0' && i < available_indexes)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
