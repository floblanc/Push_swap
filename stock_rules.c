/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 15:22:30 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/13 18:10:40 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rule_valide(char *str)
{
	if (str && ft_strcmp(str, "sa") == 0)
		return (1);
	else if (str && ft_strcmp(str, "sb") == 0)
		return (2);
	else if (str && ft_strcmp(str, "ss") == 0)
		return (3);
	else if (str && ft_strcmp(str, "pa") == 0)
		return (4);
	else if (str && ft_strcmp(str, "pb") == 0)
		return (5);
	else if (str && ft_strcmp(str, "ra") == 0)
		return (6);
	else if (str && ft_strcmp(str, "rb") == 0)
		return (7);
	else if (str && ft_strcmp(str, "rr") == 0)
		return (8);
	else if (str && ft_strcmp(str, "rra") == 0)
		return (9);
	else if (str && ft_strcmp(str, "rrb") == 0)
		return (10);
	else if (str && ft_strcmp(str, "rrr") == 0)
		return (11);
	else
		return (0);
}

int		stock_rules(t_stock **begin)
{
	char	*str;
	int		check;
	int  ret;

	str = 0;
	while (((ret = get_next_line_changed(0, &str)) > 0))
	{
		if (!(check = rule_valide(str)))
		{
			if (str)
				ft_strdel(&str);
			free_lst(begin);
			return (0);
		}
		else
			add_to_list(begin, check);
		if (str)
			ft_strdel(&str);
	}
	if (str)
		ft_strdel(&str);
	return (1);
}
