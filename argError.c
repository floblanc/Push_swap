/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argError.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:13:41 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/28 17:54:07 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/libft.h"

int		thereIsDouble(int ac, char **av)
{
	int tab[ac - 1];
	int i;
	int	runner;

	i = 1;
	while (i < ac)
	{
		runner = 0;
		while (runner < i - 1)
		{
			if (tab[runner] == ft_atoi(av[i]))
				return (1);
			runner++;
		}
		tab[runner] = ft_atoi(av[i]);
		i++;
	}
	return (0);
}

int		argError(int ac, char **av)
{
	int		i;
	int		j;

	if (ac == 1)
		return (0);
	i = 1;
	while (i < ac)
	{
		j = ft_strlen(av[i]);
		if (ft_atoi(av[i]) == 0 && av[i][j - 1] != '0')
			return (1);
		while (--j > 0)
			if (!(ft_isdigit(av[i][j])))
				return (1);
		if (!(ft_isdigit(av[i][j])) && av[i][j] != '-' && av[i][j] != '+')
			return (1);
		if (ft_atol(av[i]) > 2147483647 || ft_atol(av[i]) < -2147483648)
			return (1);
		i++;
	}
	if (thereIsDouble(ac, av))
		return(1);
	return (0);
}
