# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: floblanc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/28 13:37:40 by floblanc          #+#    #+#              #
#    Updated: 2019/02/06 13:45:21 by floblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = checker
NAME2 = push_swap
SRC = checker.c\
	  stock_arg.c\
	  stock_rules.c\
	  lst_is_sort.c\
	  add_to_list.c\
	  free_lst.c\
	  init_fct.c\
	  use_sp.c\
	  use_allr.c\
	  use_allrr.c\
	  push_swap.c\
	  select_sort_basic.c\
	  select_sort_boosted.c\
	  rotate_and_three_sort.c\
	  ft_lstlen.c\
	  double_rotate.c\
	  best_way.c\
	  display.c

OBJ = $(SRC:.c=.o)

OBJ1 = checker.o\
	   stock_arg.o\
	   stock_rules.o\
	   lst_is_sort.o\
	   add_to_list.o\
	   free_lst.o\
	   init_fct.o\
	   use_sp.o\
	   use_allr.o\
	   use_allrr.o\
	   display.o

OBJ2 = push_swap.o\
	   stock_arg.o\
	   lst_is_sort.o\
	   add_to_list.o\
	   free_lst.o\
	   use_sp.o\
	   use_allr.o\
	   use_allrr.o\
	   select_sort_basic.o\
	   select_sort_boosted.o\
	   rotate_and_three_sort.o\
	   ft_lstlen.o\
	   double_rotate.o\
	   best_way.o

INC = push_swap.h
LIB = libft/
CC = gcc
FLG = -Wall -Werror -Wextra -g3

all : $(NAME1)

$(NAME1) : $(INC) $(SRC) $(OBJ)
	make -C $(LIB) -j
	gcc $(FLG) -c $(SRC) -I$(INC)
	gcc $(FLGS) -o $(NAME1) $(OBJ1) libft/libft.a
	gcc $(FLGS) -o $(NAME2) $(OBJ2) libft/libft.a

clean :
	make clean -C $(LIB)
	rm -f $(OBJ)

fclean : clean
	make fclean -C $(LIB)
	rm -f $(NAME1) $(NAME2)

re : fclean all
