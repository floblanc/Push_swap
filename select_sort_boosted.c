/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_sort_boosted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 11:12:28 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/04 19:33:36 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		way_to_closest(t_stock **b, int value)
{
	t_stock	*closest;
	t_stock	*current;
	int 	c;
	int		len;

	c = 0;
	len = c;
	closest = *b;
	if (*b)
		current = closest->next;
	while (current)
	{
		if (ft_abs(value - closest->data) > ft_abs(value - current->data) 
				&& (value - current->data > 0 || value - closest->data < 0))
		{
			closest = current;
			len = c;
		}
		current = current->next;
		c++;
	}
	if (value - closest-> data < 0)
		len++;
	(len = ((len > c) ? 0 : len));
	return ((len <= c / 2) ? len : ((c - len) + 1) * -1);
}

int		order_b(t_stock **b)
{
	t_stock	*biggest;
	t_stock	*current;
	int 	c;
	int		len;

	c = 0;
	len = c;
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
	return ((len <= c / 2) ? len : ((c - len) + 1) * -1);
}

int		way_to_smallest(t_stock **a)
{
	t_stock	*smallest;
	t_stock	*current;
	int 	c;
	int		len;

	c = 0;
	len = c;
	smallest = *a;
	if (*a)
		current = smallest->next;
	while (current)
	{
		if (smallest->data > current->data)
		{
			smallest = current;
			len = c;
		}
		current = current->next;
		c++;
	}
	return ((len <= c / 2) ? len : ((c - len) + 1) * -1);
}

void	select_sort_boosted(t_stock **a, t_stock **b)
{
	while (ft_lstlen(a) > 3 && !(a_is_sort(a)) && ft_lstlen(b) < 3)
		use_pb(a, b, 1);
	if (ft_lstlen(b) == 3)
		sort_three(b, 'b');
	while (ft_lstlen(a) > 3 && !(a_is_sort(a)))
	{
		if (ft_abs(calc_a(a, b)) < ft_abs(way_to_closest(b, (*a)->data)))
			a_is_best(a,b);
		else
		{
			if (order_b(b) > 0)
				rotate_b(b, order_b(b));
			else if (order_b(b) < 0)
				r_rotate_b(b, order_b(b));
		}
		use_pb(a, b, 1);
	}
	sort_three(a, 'a');
	if (order_b(b) > 0)
		rotate_b(b, order_b(b));
	else if (order_b(b) < 0)
		r_rotate_b(b, order_b(b));
	while (*b)
		use_pa(a, b, 1);
}
