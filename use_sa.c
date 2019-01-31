/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_sa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:29:18 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 10:47:19 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	use_sa(t_stock **a, t_stock **b)
{
	int		tmp;
	t_stock *after;

	(void)b;
	if (*a && (*a)->next)
	{
		after = (*a)->next;
		tmp = (*a)->data;
		(*a)->data = after->data;
		after->data = tmp;
	}
}
