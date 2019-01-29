# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: floblanc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/28 13:37:40 by floblanc          #+#    #+#              #
#    Updated: 2019/01/29 18:08:27 by floblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = checker
NAME2 = push_swap
SRC = 
OBJ = $(SRCS:.c=.o)
OBJ1 =
OBJ2 = 
INC =
LIB = libft/
CC = gcc
FLG = -Wall -Werror -Wextra

all : $(NAME1)

$(NAME1) : $(INC) $(SRC) $(OBJ)
	make -C $(LIB)
	gcc $(FLG) -c %(SRC) $(INC)
	gcc $(FLGS) -o %(NAME1) $(OBJ1) libft/libft.a
	gcc $(FLGS) -o %(NAME2) $(OBJ2) libft/libft.a

clean :
	make clean -C $(LIB)
	rm -f $(OBJ):

fclean : clean
	make fclean -C $(LIB)
	rm -f $(NAME1) $(NAME2)
