/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_sp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:29:18 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/01 18:01:03 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	use_sa(t_stock **a, t_stock **b, int w)
{
	int		tmp;
	t_stock *after;

	(void)b;
	if (*a && (*a)->next)
	{
		after = (*a)->next;
		tmp = (*a)->data;
		(*a)->data = after->data;
		after->data = tmp;
	}
	if (w)
		write(1, "sa\n", 3);
}

void	use_sb(t_stock **a, t_stock **b, int w)
{
	int		tmp;
	t_stock *after;

	(void)a;
	if (*b && (*b)->next)
	{
		after = (*b)->next;
		tmp = (*b)->data;
		(*b)->data = after->data;
		after->data = tmp;
	}
	if (w)
		write(1, "sb\n", 3);
}

void	use_ss(t_stock **a, t_stock **b, int w)
{
	use_sa(a, b, 0);
	use_sb(a, b, 0);
	if (w)
		write(1, "ss\n", 3);
}

void	use_pa(t_stock **a, t_stock **b, int w)
{
	t_stock	*save;

	if (*b)
	{
		save = 0;
		if ((*b)->next)
			save = (*b)->next;
		(*b)->next = *a;
		*a = *b;
		*b = save;
	}
	if (w)
		write(1, "pa\n", 3);
}

void	use_pb(t_stock **a, t_stock **b, int w)
{
	t_stock	*save;

	if (*a)
	{
		save = 0;
		if ((*a)->next)
			save = (*a)->next;
		(*a)->next = *b;
		*b = *a;
		*a = save;
	}
	if (w)
		write(1, "pb\n", 3);
}
