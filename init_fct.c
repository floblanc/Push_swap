/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:35:50 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/01 12:29:58 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_fct(void (*fct[11])(t_stock**, t_stock**))
{
	fct[0] = use_sa;
	fct[1] = use_sb;
	fct[2] = use_ss;
	fct[3] = use_pa;
	fct[4] = use_pb;
	fct[5] = use_ra;
	fct[6] = use_rb;
	fct[7] = use_rr;
	fct[8] = use_rra;
	fct[9] = use_rrb;
	fct[10] = use_rrr;
}
