/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 10:08:54 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 10:09:24 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_lst(t_stock **begin)
{
	t_stock	*current;
	t_stock	*before;

	if (*begin)
	{
		before = *begin;
		current = before->next;
		free(before);
		*begin = 0;
		while (current)
		{
			before = current;
			current = current->next;
			free(before);
		}
	}
}
