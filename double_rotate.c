/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:22:53 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/13 15:34:58 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_r(t_stock **a, t_stock **b, int i)
{
	while (i-- != 0)
		use_rr(a, b, 1);
}

void	r_rotate_r(t_stock **a, t_stock **b, int i)
{
	while (i++ != 0)
		use_rrr(a, b, 1);
}
