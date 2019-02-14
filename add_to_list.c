/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addToList.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 10:07:33 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/14 12:05:26 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_to_list(t_stock **begin, int data)
{
	t_stock	*new;
	t_stock	*current;

	if (!(new = (t_stock*)malloc(sizeof(t_stock) * 1)))
		exit(0);
	new->data = data;
	new->next = 0;
	if (!(*begin))
		*begin = new;
	else
	{
		current = *begin;
		while (current->next)
			current = current->next;
		current->next = new;
	}
}
