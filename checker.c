/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 16:58:02 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/13 17:54:24 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checker2(t_stock *begin_rule, t_stock *pile_a, int v, int ac)
{
	t_stock	*pile_b;
	void	(*fct[11])(t_stock **a, t_stock **b, int w);

	pile_b = 0;
	init_fct(fct);
	if (v && pile_a)
		display(&pile_a, &pile_b);
	while (begin_rule)
	{
		fct[begin_rule->data - 1](&pile_a, &pile_b, 0);
		begin_rule = begin_rule->next;
		if (v)
		{
			usleep(100000);
			display(&pile_a, &pile_b);
		}
	}
	(lst_is_sort(&pile_a, ac)) ? write(1, "OK\n", 3) : write(1, "KO\n", 3);
	free_lst(&pile_a);
	free_lst(&pile_b);
	free_lst(&begin_rule);
}

void	checker(int ac, char **av)
{
	int		v;
	t_stock	*pile_a;
	t_stock	*begin_rule;

	v = 0;
	begin_rule = 0;
	pile_a = 0;
	if (!(stock_arg(ac, av, &pile_a, &v)) || !(stock_rules(&begin_rule)))
	{
		free_lst(&pile_a);
		free_lst(&begin_rule);
		write(1, "Error\n", 6);
		return ;
	}
	checker2(begin_rule, pile_a, v, ac - v);
	free_lst(&begin_rule);
}

int		main(int ac, char **av)
{
	int	v;

	v = 0;
	if (ac == 2 && (ft_strcmp(av[1], "-v") == 0))
		return (0);
	if (ac > 1)
		checker(ac, av);
	return (0);
}
