/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:02:05 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/15 16:02:06 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

char	*ft_strcat(char *dest, char *src)
{
	int	destLength;
	int	i;

	destLength = giveMeLengthPlease(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[destLength + i] = src[i];
		i++;
	}
	dest[destLength + i] = '\0';
	return (dest);
}
