# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocluzet <jo@cluzet.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/23 14:11:51 by jocluzet          #+#    #+#              #
#    Updated: 2020/05/01 16:10:49 by jocluzet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c 	\
	src/type_d.c 	\
	src/type_p.c	\
	src/type_s.c 	\
	src/type_c.c 	\
	src/utils.c 	\
	src/type_u.c 	\
	src/type_x.c 	\
	src/type_xmaj.c \
	src/utils2.c 	\
	src/type_pourc.c \

OBJECTS = ft_printf.o \
			type_d.o 	\
			type_s.o 	\
			type_c.o 	\
			type_p.o	\
			utils.o 	\
			type_u.o 	\
			type_x.o 	\
			type_xmaj.o	\
			utils2.o	\
			type_pourc.o 	\


INCLUDES = inc/ft_printf.h


all: $(NAME)

$(NAME): $(OBJECTS)

$(OBJECTS): $(SRCS) $(INCLUDES)
	@gcc -Wextra -Werror -Wall -c $(SRCS)
	@ar rcs $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
bonus:
