/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-mefe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:41:06 by hel-mefe          #+#    #+#             */
/*   Updated: 2021/08/22 14:40:16 by hel-mefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_compare(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != 0 || str2[i] != 0)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*keep_value;

	if (argc >= 1)
	{
		i = 1;
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_compare(argv[i], argv[j]) > 0)
				{
					keep_value = argv[i];
					argv[i] = argv[j];
					argv[j] = keep_value;
				}
				j++;
			}
			print_str(argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}
}
