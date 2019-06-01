# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmncube <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/01 12:19:34 by nmncube           #+#    #+#              #
#    Updated: 2019/06/01 13:45:16 by nmncube          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = "libft.a"
SRC = ft_*.c
OBJ = *.o
INC = "libft.h"

all : $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) $(INC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re:
	fclean all

