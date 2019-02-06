/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 19:36:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/06 17:18:37 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		size_nb(int nb)
{
	int	size;

	size = 0;
	if (nb <= 0)
		size++;
	while (nb != 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

void	display_a(t_stock **a, int size)
{
	size = 5 - size_nb((*a)->data) / 2;
	size -= size_nb((*a)->data) % 2;
	while (size-- > 0)
		write(1, " ", 1);
	ft_putnbr((*a)->data);
	size = 6 - size_nb((*a)->data) / 2;
	while (size-- > 0)
		write(1, " ", 1);
	*a = (*a)->next;
}

void	display_b(t_stock **b, int size)
{
	size = 6 - size_nb((*b)->data) / 2;
	while (size-- > 0)
		write(1, " ", 1);
	ft_putnbr((*b)->data);
	size = 6 - size_nb((*b)->data) / 2;
	size -= size_nb((*b)->data) % 2;
	while (size-- > 0)
		write(1, " ", 1);
	*b = (*b)->next;
}

void	display(t_stock **a, t_stock **b)
{
	t_stock	*currenta;
	t_stock	*currentb;

	currenta = *a;
	currentb = *b;
	system("clear");
	write(1, "------a------|------b------\n", 28);
	while (currenta || currentb)
	{
		write(1, "| ", 2);
		if (currenta)
			display_a(&currenta, 0);
		else
			write(1, "           ", 11);
		write(1, "|", 1);
		if (currentb)
			display_b(&currentb, 0);
		else
			write(1, "             ", 12);
		write(1, "|\n", 2);
	}
	write(1, "---------------------------\n", 28);
}
