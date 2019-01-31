/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_sb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:29:18 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 10:47:31 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	use_sb(t_stock **a, t_stock **b)
{
	int		tmp;
	t_stock *after;

	(void)a;
	if (*b && (*b)->next)
	{
		after = (*b)->next;
		tmp = (*b)->data;
		(*b)->data = after->data;
		after->data = tmp;
	}
}
