/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 11:12:28 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/03 19:55:41 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	a_is_best(t_stock *a, t_stock *b, int ac)
{
	int		pos_c;
	int		pos_s;
	t_stock	*current;
	t_stock *smaller;

	smaller = *a;
	current = smaller->next;
	pos_c = 1;
	pos_s = 0;
	find_smaller(&current, &smaller, &pos_s, &pos_c);
	while ((*a)->data != smaller->data)
	{
		if (pos_c - pos_s < pos_s)
			use_rra(a, b, 1);
		else
			use_ra(a, b, 1);
	}
	if (lst_is_sort(a, ac))
		return ;
	use_pb(a, b, 1);
}

void	b_is_best(t_stock *a, t_stock *b, ac)
{
	int		pos_c;
	int		pos_s;
	int		target;
	t_stock	*current;

	target = *b;
	pos_c = 1;
	pos_s = 0;
	target = (*a)->data;
	find_closer(&current, &target, &pos_s, &pos_c);
	target += (*a)->data;
	while ((*b)->data != target)
	{
		if (pos_c - pos_s < pos_s)
			use_rrb(a, b, 1);
		else
			use_rb(a, b, 1);
	}
	use_pb(a, b, 1);
}

int	find_closer(t_stock **current, int target, int *s, int *c)
{
}

int	find_smaller(t_stock **current, t_stock **smaller, int *s, int *c)
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
	return ((*c - *s < *s) ? *c - *s : *s);
}
*/
void	select_sort(t_stock **a, t_stock **b, int ac)
{

	(void)a;
	(void)b;
	(void)ac;
/*	int		pos_c;
	int		pos_s;
	t_stock	*current;
	t_stock *smaller;

	while ((*a)->next && !(a_is_sort(a)))
	{

	}
	while (*b)
		use_pa(a, b, 1);*/
}
