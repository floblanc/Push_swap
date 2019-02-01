/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_allrr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 11:22:55 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/01 13:34:00 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	use_rra(t_stock **a, t_stock **b)
{
	t_stock	*before;
	t_stock *current;

	(void)b;
	if (*a && (*a)->next)
	{
		before = *a;
		current = (*a)->next;
		while (current->next)
		{
			before = current;
			current = current->next;
		}
		current->next = *a;
		before->next = 0;
		*a = current;
	}
}

void	use_rrb(t_stock **a, t_stock **b)
{
	t_stock	*before;
	t_stock *current;

	(void)a;
	if (*b && (*b)->next)
	{
		before = *b;
		current = (*b)->next;
		while (current->next)
		{
			before = current;
			current = current->next;
		}
		current->next = *b;
		before->next = 0;
		*b = current;
	}
}

void	use_rrr(t_stock **a, t_stock **b)
{
	use_rra(a, b);
	use_rrb(a, b);
}
