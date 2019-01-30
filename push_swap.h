/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:14:17 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/30 16:53:30 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
/////////
////////

#include <stdio.h>


/////////////
///////////
///////////



typedef	struct		s_rule
{
	int				rule;
	struct	s_rule	*next;
}					t_rule;

int					*stockArg(int ac, char **av);
int					stock_rules(t_rule **begin);

#endif