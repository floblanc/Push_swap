/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 11:22:55 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 11:34:29 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
