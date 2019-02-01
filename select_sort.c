/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 11:12:28 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/01 14:40:32 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_it_roll(t_stock **a, t_stock **b, int pos_s, int pos_c)
{

	if (pos_c - pos_s < pos_s)
	{
		use_rra(a, b);
		write(1, "rra\n", 4);
	}
	else
	{
		use_ra(a, b);
		write(1, "ra\n", 3);
	}
}

void	find_smaller(t_stock **current, t_stock **smaller, int *s, int *c)
{
	while (*current)
	{
		if ((*smaller)->data > (*current)->data)
		{
			*smaller = *current;
			*s = *c;
		}
		*current = (*current)->next;
		(*c)++;
	}
}

void	select_sort(t_stock **a, t_stock **b, int ac)
{
	int		pos_c;
	int		pos_s;
	t_stock	*current;
	t_stock *smaller;

	while ((*a)->next && !(a_is_sort(a)))
	{	
		smaller = *a;
		current = smaller->next;
		pos_c = 1;
		pos_s = 0;
		find_smaller(&current, &smaller, &pos_s, &pos_c);
		while ((*a)->data != smaller->data)
			make_it_roll(a, b, pos_s, pos_c);
		if (lst_is_sort(a, ac))
			return ;
		use_pb(a, b);
		write(1, "pb\n", 3);
	}
	while (*b)
	{
		use_pa(a, b);
		write(1, "pa\n", 3);
	}
}
