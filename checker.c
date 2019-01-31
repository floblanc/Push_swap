/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 16:58:02 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 16:00:06 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_all_false(t_stock **a, t_stock **rule)
{
	if (*a)
		free_lst(a);
	if (*rule)
		free_lst(rule);
}

void	checker(int ac, char **av)
{
	int		i;
	t_stock	*pile_a;
	t_stock	*pile_b;
	t_stock	*begin_rule;
	void	(*fct[11])(t_stock **a, t_stock **b);

	init_fct(fct);
	i = 0;
	begin_rule = 0;
	pile_a = 0;
	pile_b = 0;
	if (!(stock_arg(ac, av, &pile_a)) || !(stock_rules(&begin_rule)))
	{
		write(1, "Error\n", 6);
		check_all_false(&pile_a, &begin_rule);
		return ;
	}
	while (begin_rule)
	{
		fct[begin_rule->data - 1](&pile_a, &pile_b);
		begin_rule = begin_rule->next;
	}
	((lst_is_sort(&pile_a, ac)) ? write(1, "OK\n", 3) : write(1, "KO\n", 3));
}

int		main(int ac, char **av)
{
	if (ac > 1)
		ret = checker(ac, av);
	return (0);
}
