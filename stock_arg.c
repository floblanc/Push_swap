/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:13:41 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/13 16:10:32 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		there_is_double(int ac, char **av, t_stock **begin, int *v)
{
	t_stock	*current;
	int		i;

	current = 0;
	i = 1 + *v;
	while (i < ac)
	{
		current = *begin;
		while (current)
		{
			if (current->data == ft_atoi(av[i]))
			{
				free_lst(begin);
				return (0);
			}
			current = current->next;
		}
		add_to_list(begin, ft_atoi(av[i]));
		i++;
	}
	return (1);
}

int		stock_arg(int ac, char **av, t_stock **begin, int *v)
{
	int		i;
	int		j;

	i = 1;
	if (ft_strcmp(av[i], "-v") == 0)
	{
		*v = 1;
		i++;
	}
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
		if (ft_atol(av[i]) > 2147483647 || ft_atol(av[i]) < -2147483648
			|| ft_strlen(av[i]) > 11)
			return (0);
		i++;
	}
	return (there_is_double(ac, av, begin, v));
}
