/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_rra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 11:22:55 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 11:29:43 by floblanc         ###   ########.fr       */
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
