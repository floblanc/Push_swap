/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 15:29:06 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 16:50:04 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int		main(int ac, char **av)
{
	if (ac > 1)
	{
		t_stock	*beginarg;

		beginarg = 0;
		if (!(stock_arg(ac, av, &beginarg)))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (!(lst_is_sort(&beginarg)))
			algosamere(&beginarg, ac);
	}
	return (0);
}
