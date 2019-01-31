/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_ra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 11:14:05 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 11:30:53 by floblanc         ###   ########.fr       */
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
