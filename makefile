# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmncube <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/01 12:19:34 by nmncube           #+#    #+#              #
#    Updated: 2019/06/07 14:56:37 by nmncube          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = "libft.a"
SRC = ft_* *.h
OBJ = *.o

all : $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME) *.gch

re: fclean all

