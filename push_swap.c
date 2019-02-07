/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 15:29:06 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/07 18:00:08 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choose_algo(t_stock **a, t_stock **b, int ac)
{
	if (ac == 3)
		use_sa(a, b, 1);
	else if (ac == 4)
		sort_three(a, 'a');
	else if (ac <= 11 || b_is_sort(a))
		select_sort_basic(a, b, ac);
	else
		select_sort_boosted(a, b);
}

int		main(int ac, char **av)
{
	t_stock	*beginarg;
	t_stock *b;
	int		v;

	v = 0;
	if (ac > 1)
	{
		beginarg = 0;
		b = 0;
		if (!(stock_arg(ac, av, &beginarg, &v)) || v)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (!(lst_is_sort(&beginarg, ac)))
			choose_algo(&beginarg, &b, ac);
		free_lst(&beginarg);
	}
	return (0);
}
