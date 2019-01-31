/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_rb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 11:14:05 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 11:21:13 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
