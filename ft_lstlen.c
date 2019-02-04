/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:26:12 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/04 13:59:30 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lstlen(t_stock **begin)
{
	int		size;
	t_stock	*current;

	size = 0;
	if (*begin)
	{
		current = *begin;
		while (current)
		{
			size++;
			current = current->next;
		}
	}
	return (size);
}
