/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 15:29:06 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/01 15:16:25 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choose_algo(t_stock **a, t_stock **b, int ac)
{
		select_sort(a, b, ac);
}

int		main(int ac, char **av)
{
	t_stock	*beginarg;
	t_stock *b;

	if (ac > 1)
	{
		beginarg = 0;
		b = 0;
		if (!(stock_arg(ac, av, &beginarg)))
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
