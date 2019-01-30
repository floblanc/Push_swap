/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 16:58:02 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/30 18:34:43 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_fct(void	*(*fct))
{
	fct[0] = use_sa;
	fct[1] = use_sb;
	fct[2] = use_ss;
	fct[3] = use_pa;
	fct[4] = use_pb;
	fct[5] = use_ra;
	fct[6] = use_rb;
	fct[7] = use_rr;
	fct[8] = use_rra;
	fct[9] = use_rrb;
	fct[10] = use_rrr;
}

void	checker(int ac, char **av)
{
	int		i;
	int		*pile_a;
	int		*pile_b[ac - 1];
	t_rule	*begin;
	void	(*fct[11])(int *a, int *b);

	init_fct(fct);
	i = 0;
	begin = 0;
	pile_a = stockArg(ac, av);
	if (!(pile_a) || !(stock_rules(&begin)))
	{
		write(1, "Error\n", 6);
		return ;
	}
	while (begin)
	{
		fct[begin->rule - 1](pile_a, pile_b);
		begin = begin->next;
	}
	while (i < ac - 2 && tab[i] < tab[i + 1])
		i++;
	if (i == ac - 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int		main(int ac, char **av)
{
	if (ac > 1)
		checker(ac, av);
	return(0);
}
