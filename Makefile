# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 15:58:46 by emohamed          #+#    #+#              #
#    Updated: 2022/10/04 15:56:28 by emohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = gcc
CFLAGS = -Werror -Wall -Wextra
SRCS = $(wildcard *.c)
OBJS = $(SRCS:c=o)
NAME = libft.a



all: $(NAME)


$(NAME): objects
	ar -rc $(NAME) $(OBJS)

objects: $(SRCS)
	$(CC) $(CFLAGS) -c $^ 

# main.o: main.c
# 	$(CC) $(CFLAGS) -c $^

clean:
	rm -rf $(wildcard *.o)

fclean: clean
	rm -rf $(NAME)

re: fclean all
