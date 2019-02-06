/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_way.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 11:13:22 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/06 15:34:41 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		full_way(int a, int b)
{
	if ((a > 0 && b > 0))
		return ((a > b) ? a : b);
	else if (a < 0 && b < 0)
		return ((a < b) ? ft_abs(a) : ft_abs(b));
	else
		return (ft_abs(a) + ft_abs(b));
}

void	use_best_way(t_stock **a, t_stock **b, int val_a, int val_b)
{
	int	tmp;

	if (val_a > 0 && val_b > 0)
	{
		rotate_r(a, b, ((val_a > val_b) ? val_b : val_a));
		tmp = val_a;
		(val_a -= ((val_a > val_b) ? val_b : val_a));
		(val_b -= ((tmp > val_b) ? val_b : tmp));
	}
	else if (val_a < 0 && val_b < 0)
	{
		r_rotate_r(a, b, ((val_a < val_b) ? val_b : val_a));
		tmp = val_a;
		(val_a -= ((val_a < val_b) ? val_b : val_a));
		(val_b -= ((tmp < val_b) ? val_b : tmp));
	}
	if (val_a > 0)
		rotate_a(a, val_a);
	else
		r_rotate_a(a, val_a);
	if (val_b > 0)
		rotate_b(b, val_b);
	else
		r_rotate_b(b, val_b);
}

void	stock_best_way(t_stock **a, t_stock **b, int pos)
{
	t_stock *current;
	int		i;
	int		val_a;
	int		val_b;

	current = *a;
	i = 0;
	while (i != pos)
	{
		current = current->next;
		i++;
	}
	val_a = front_a(a, pos);
	val_b = way_to_closest(b, current->data, 0, 1);
	//printf("a = %d et b = %d\n", val_a ,val_b);
	use_best_way(a, b, val_a, val_b);
}

int		best_way(t_stock **a, t_stock **b, int len, int c)
{
	t_stock *cur;
	t_stock	*best;

	best = *a;
	cur = 0;
	if (*a)
		cur = best->next;
	while (cur)
	{//printf("c : %d->d = %d\n", c, cur->data);
		if (full_way(front_a(a, len), way_to_closest(b, best->data, 0, 1)) 
				> full_way(front_a(a, c), way_to_closest(b, cur->data, 0, 1)))
		{//printf("best etait %d->d = %d\n", len, best->data);
			best = cur;
			len = c;
		}
		cur = cur->next;
		c++;
	}
	return (len);
}
