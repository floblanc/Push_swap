/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stockArg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:13:41 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/30 16:45:59 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*thereIsDouble(int ac, char **av)
{
	int *tab;
	int i;
	int	runner;

	if (!(tab = (int*)malloc(sizeof(int) * (ac - 1))))
		return (0);
	i = 1;
	while (i < ac)
	{
		runner = 0;
		while (runner < i - 1)
		{
			if (tab[runner] == ft_atoi(av[i]))
				return (0);
			runner++;
		}
		tab[runner] = ft_atoi(av[i]);
		i++;
	}
	return (tab);
}

int		*stockArg(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = ft_strlen(av[i]);
		if (ft_atoi(av[i]) == 0 && av[i][j - 1] != '0')
			return (0);
		while (--j > 0)
			if (!(ft_isdigit(av[i][j])))
				return (0);
		if (!(ft_isdigit(av[i][j])) && av[i][j] != '-' && av[i][j] != '+')
			return (0);
		if (ft_atol(av[i]) > 2147483647 || ft_atol(av[i]) < -2147483648)
			return (0);
		i++;
	}
	return (thereIsDouble(ac, av));
}
