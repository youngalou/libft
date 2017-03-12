# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyoung <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/27 10:39:14 by lyoung            #+#    #+#              #
#    Updated: 2017/03/12 10:14:49 by lyoung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAG = -Wall -Wextra -Werror
SRCS = *.c 
OBJS = *.o

all: $(NAME)

create_objects:
	gcc $(CFLAG) -c $(SRCS)

compile_lib: create_objects
	ar rc $(NAME) $(OBJS)

$(NAME): create_objects compile_lib

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
