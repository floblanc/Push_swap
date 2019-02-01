/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_allr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 11:14:05 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/01 14:34:45 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	use_ra(t_stock **a, t_stock **b)
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
}

void	use_rb(t_stock **a, t_stock **b)
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
}

void	use_rr(t_stock **a, t_stock **b)
{
	use_ra(a, b);
	use_rb(a, b);
}
