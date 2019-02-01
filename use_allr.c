/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_allr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 11:14:05 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/01 17:49:14 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	use_ra(t_stock **a, t_stock **b, int w)
{
	t_stock	*save;
	t_stock *current;

	(void)b;
	if (*a && (*a)->next)
	{
		save = *a;
		*a = (*a)->next;
		save->next = 0;
		current = *a;
		while (current->next)
			current = current->next;
		current->next = save;
	}
	if (w)
		write(1, "ra\n", 3);
}

void	use_rb(t_stock **a, t_stock **b, int w)
{
	t_stock	*save;
	t_stock *current;

	(void)a;
	if (*b && (*b)->next)
	{
		save = *b;
		*b = (*b)->next;
		save->next = 0;
		current = *b;
		while (current->next)
			current = current->next;
		current->next = save;
	}
	if (w)
		write(1, "rb\n", 3);
}

void	use_rr(t_stock **a, t_stock **b, int w)
{
	use_ra(a, b, 0);
	use_rb(a, b, 0);
	if (w)
		write(1, "rr\n", 3);
}
