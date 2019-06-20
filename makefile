# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmncube <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/01 12:19:34 by nmncube           #+#    #+#              #
#    Updated: 2019/06/20 15:30:26 by nmncube          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC = ft_loop.c ft_putendl_fd.c ft_strequ.c ft_strnew.c ft_memalloc.c ft_putnbr.c ft_striter.c ft_strnstr.c ft_memccpy.c ft_putnbr_fd.c ft_striteri.c ft_strrchr.c ft_atoi.c ft_memchr.c ft_putstr.c ft_strjoin.c ft_strsplit.c ft_bzero.c ft_memcmp.c ft_putstr_fd.c ft_strlcat.c ft_strstr.c ft_int_len.c ft_memcpy.c ft_strcat.c ft_strlen.c ft_strsub.c ft_isalnum.c ft_memdel.c ft_strchr.c ft_strmap.c ft_strtrim.c ft_isalpha.c ft_memmove.c ft_strclr.c ft_strmapi.c ft_tolower.c ft_isascii.c ft_memset.c ft_strcmp.c ft_strncat.c ft_toupper.c ft_isdigit.c ft_putchar.c ft_strcpy.c ft_strncmp.c ft_isprint.c ft_putchar_fd.c ft_strdel.c ft_strncpy.c ft_itoa.c ft_putendl.c ft_strdup.c ft_strnequ.c
OBJ = *.o

all : $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)

re: fclean all

