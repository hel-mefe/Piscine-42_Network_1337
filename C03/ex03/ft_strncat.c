/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:39:00 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/16 18:10:24 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	giveMeLengthPlease(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destLength;
	unsigned int	i;

	destLength = giveMeLengthPlease(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[destLength + i] = src[i];
		i++;
	}
	dest[destLength + i] = '\0';
	return (dest);
}
