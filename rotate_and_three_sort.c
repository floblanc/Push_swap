/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:34:54 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/04 17:59:55 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate_b(t_stock **b, int i)
{
	while (i++ != 0)
		use_rrb(b, 0, 1);
}

void	r_rotate_a(t_stock **a, int i)
{
	while (i++ != 0)
		use_rra(a, 0, 1);
}

void	rotate_b(t_stock **b, int i)
{
	while (i-- != 0)
		use_rb(b, 0, 1);
}

void	rotate_a(t_stock **a, int i)
{
	while (i-- != 0)
		use_ra(a, 0, 1);
}

void	sort_three(t_stock **begin, char c)
{
	t_stock *middle;
	t_stock *end;

	middle = (*begin)->next;
	end = middle->next;
	if (c == 'a')
	{
		if ((*begin)->data > middle->data && (*begin)->data > end->data)
			use_ra(begin, 0, 1);
		else if (middle->data > (*begin)->data && middle->data > end->data)
			use_rra(begin, 0, 1);
		middle = (*begin)->next;
		if ((*begin)->data > middle->data)
			use_sa(begin, 0, 1);
	}
	else
	{
		if ((*begin)->data < middle->data && (*begin)->data < end->data)
			use_rb(0, begin, 1);
		else if (middle->data < (*begin)->data && middle->data < end->data)
			use_rrb(0 ,begin, 1);
		middle = (*begin)->next;
		if ((*begin)->data < middle->data)
			use_sb(0, begin, 1);
	}
}
