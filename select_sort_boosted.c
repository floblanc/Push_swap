/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_sort_boosted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 11:12:28 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/07 15:09:15 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		front_a(t_stock **a, int pos)
{
	if (ft_lstlen(a) - pos < pos)
		return ((ft_lstlen(a) - pos) * -1);
	else
		return (pos);
}

int		way_to_closest(t_stock **b, int value, int len, int c)
{
	t_stock	*closest;
	t_stock	*current;

	current = 0;
	closest = *b;
	if (*b)
		current = closest->next;
	while (current)
	{
		if ((ft_abs(value - closest->data) >= ft_abs(value - current->data)
					&& value - current->data > 0)
				|| (value - current->data > 0 && value - closest->data < 0))
		{
			closest = current;
			len = c;
		}
		current = current->next;
		c++;
	}
	if (value - closest->data < 0)
		return (order_b(b, 0, 1));
	return ((len <= c / 2) ? len : ((c - len) * -1));
}

int		order_b(t_stock **b, int len, int c)
{
	t_stock	*biggest;
	t_stock	*current;

	current = 0;
	biggest = *b;
	if (*b)
		current = biggest->next;
	while (current)
	{
		if (biggest->data < current->data)
		{
			biggest = current;
			len = c;
		}
		current = current->next;
		c++;
	}
	return ((len <= c / 2) ? len : (c - len) * -1);
}

void	select_sort_boosted(t_stock **a, t_stock **b)
{
	while (ft_lstlen(b) < 3)
		use_pb(a, b, 1);
	if (ft_lstlen(b) == 3)
		sort_three(b, 'b');
	while (ft_lstlen(a) > 0)
	{
		stock_best_way(a, b, best_way(a, b, 0, 1));
		use_pb(a, b, 1);
	}
	if (order_b(b, 0, 1) > 0)
		rotate_b(b, order_b(b, 0, 1));
	else if (order_b(b, 0, 1) < 0)
		r_rotate_b(b, order_b(b, 0, 1));
	while (*b)
		use_pa(a, b, 1);
}
