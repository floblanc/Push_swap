/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 15:22:30 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/30 17:26:59 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_lst(t_rule **begin)
{
	t_rule	*current;
	t_rule	*before;

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

void	addToList(t_rule **begin, int data)
{
	t_rule	*new;
	t_rule	*current;

	if (!(new = (t_rule*)malloc(sizeof(t_rule) * 1)))
		return ;
	new->rule = data;
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

int		ruleValide(char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		return (1);
	else if (ft_strcmp(str, "sb") == 0)
		return (2);
	else if (ft_strcmp(str, "ss") == 0)
		return (3);
	else if (ft_strcmp(str, "pa") == 0)
		return (4);
	else if (ft_strcmp(str, "pb") == 0)
		return (5);
	else if (ft_strcmp(str, "ra") == 0)
		return (6);
	else if (ft_strcmp(str, "rb") == 0)
		return (7);
	else if (ft_strcmp(str, "rr") == 0)
		return (8);
	else if (ft_strcmp(str, "rra") == 0)
		return (9);
	else if (ft_strcmp(str, "rrb") == 0)
		return (10);
	else if (ft_strcmp(str, "rrr") == 0)
		return (11);
	else
		return (0);
}

int		stock_rules(t_rule **begin)
{
	char	*str;
	int		check;

	while ((get_next_line_changed(0, &str) > 0))
	{
		if (!(check = ruleValide(str)))
		{
			free_lst(begin);
			break ;
		}
		else
			addToList(begin, check);
	}
	if (*begin)
		return (1);
	return (0);
}
