# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/19 20:32:17 by gurgaspa          #+#    #+#              #
#    Updated: 2025/01/19 21:45:59 by gurgaspa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_DIR = srcs
INCL_DIR = includes
OBJ_DIR = objs

SRCS = ft_putchar.c ft_putstr.c ft_strlen.c ft_swap.c
OBJS = $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(INCL_DIR)

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)/ft_putchar.o: $(SRCS_DIR)/ft_putchar.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/ft_putstr.o: $(SRCS_DIR)/ft_putstr.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/ft_strlen.o: $(SRCS_DIR)/ft_strlen.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/ft_swap.o: $(SRCS_DIR)/ft_swap.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
