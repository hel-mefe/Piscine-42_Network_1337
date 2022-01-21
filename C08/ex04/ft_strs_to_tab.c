/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:53:25 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/26 18:13:16 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
int	need_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*p;
	char	*p1;

	i = 0;
	length = need_length(src) + 1;
	p = (char *)malloc(length);
	p1 = p;
	if (p == 0)
		return (0);
	while (src[i] != 0)
	{
		*p = src[i];
		p++;
		i++;
	}
	*p = '\0';
	return (p1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = -1;
	tab = (t_stock_str *) malloc ((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (0);
	while (++i < ac)
	{
		tab[i].size = need_length(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
	}
	tab[i].str = 0;
	return (tab);
}
