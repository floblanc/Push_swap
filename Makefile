# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: floblanc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/28 13:37:40 by floblanc          #+#    #+#              #
#    Updated: 2019/01/31 15:10:15 by floblanc         ###   ########.fr        #
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
	  use_sa.c\
	  use_sb.c\
	  use_ss.c\
	  use_pa.c\
	  use_pb.c\
	  use_ra.c\
	  use_rb.c\
	  use_rr.c\
	  use_rra.c\
	  use_rrb.c\
	  use_rrr.c

OBJ = $(SRC:.c=.o)

OBJ1 = checker.o\
	   stock_arg.o\
	   stock_rules.o\
	   lst_is_sort.o\
	   add_to_list.o\
	   free_lst.o\
	   init_fct.o\
	   use_sa.o\
	   use_sb.o\
	   use_ss.o\
	   use_pa.o\
	   use_pb.o\
	   use_ra.o\
	   use_rb.o\
	   use_rr.o\
	   use_rra.o\
	   use_rrb.o\
	   use_rrr.o

OBJ2 = 
INC = push_swap.h
LIB = libft/
CC = gcc
FLG = -Wall -Werror -Wextra

all : $(NAME1)

$(NAME1) : $(INC) $(SRC) $(OBJ)
	make -C $(LIB)
	gcc $(FLG) -c $(SRC) $(INC)
	gcc $(FLGS) -o $(NAME1) $(OBJ1) libft/libft.a
	gcc $(FLGS) -o $(NAME2) $(OBJ2) libft/libft.a

clean :
	make clean -C $(LIB)
	rm -f $(OBJ)

fclean : clean
	make fclean -C $(LIB)
	rm -f $(NAME1) $(NAME2)

re : fclean all
