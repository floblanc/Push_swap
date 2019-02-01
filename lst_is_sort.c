/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_is_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:37:06 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/01 14:39:21 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		a_is_sort(t_stock **a)
{
	t_stock	*current;
	t_stock	*before;

	if (*a && (*a)->next)
	{
		before = *a;
		current = before->next;
		while (current)
		{
			if (before->data > current->data)
				return (0);
			before = current;
			current = current->next;
		}
	}
	return (1);
}

int		lst_is_sort(t_stock **a, int ac)
{
	int		i;
	t_stock	*current;
	t_stock	*before;

	if (*a && (*a)->next)
	{
		i = 1;
		before = *a;
		current = before->next;
		while (current)
		{
			if (before->data > current->data)
				return (0);
			i++;
			before = current;
			current = current->next;
		}
		if (i != ac - 1)
			return (0);
	}
	return (1);
}
