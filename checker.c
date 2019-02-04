/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 16:58:02 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/04 18:39:01 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checker(int ac, char **av)
{
	int		i;
	t_stock	*pile_a;
	t_stock	*pile_b;
	t_stock	*begin_rule;
	void	(*fct[11])(t_stock **a, t_stock **b, int w);

	init_fct(fct);
	i = 0;
	begin_rule = 0;
	pile_a = 0;
	pile_b = 0;
	if (!(stock_arg(ac, av, &pile_a)) || !(stock_rules(&begin_rule)))
	{
		write(1, "Error\n", 6);
		return ;
	}
	while (begin_rule)
	{
		display(&pile_a, &pile_b);
		fct[begin_rule->data - 1](&pile_a, &pile_b, 0, 1);
		begin_rule = begin_rule->next;
		usleep(250000);
	}
	display(&pile_a, &pile_b);
	((lst_is_sort(&pile_a, ac)) ? write(1, "OK\n", 3) : write(1, "KO\n", 3));
	free_lst(&pile_a);
	free_lst(&begin_rule);
}

int		main(int ac, char **av)
{
	if (ac > 1)
		checker(ac, av);
	return (0);
}
