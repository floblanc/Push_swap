/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_allrr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 11:22:55 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/01 17:53:07 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	use_rra(t_stock **a, t_stock **b, int w)
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
	if (w)
		write(1, "rra\n", 4);
}

void	use_rrb(t_stock **a, t_stock **b, int w)
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
	if (w)
		write(1, "rrb\n", 4);
}

void	use_rrr(t_stock **a, t_stock **b, int w)
{
	use_rra(a, b, 0);
	use_rrb(a, b, 0);
	if (w)
		write(1, "rrr\n", 4);
}
