# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmncube <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/01 12:19:34 by nmncube           #+#    #+#              #
#    Updated: 2019/06/04 09:36:21 by event            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = "libft.a"
SRC = ft_*
OBJ = *.o
INC = "libft.h"

all : $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) $(INC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all

