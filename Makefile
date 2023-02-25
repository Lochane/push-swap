# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lochane <lochane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 15:42:20 by lsouquie          #+#    #+#              #
#    Updated: 2023/02/25 01:27:44 by lochane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = $(addprefix src/, push_swap manage_linkedlist check utils)

OBJ = $(addsuffix .o, ${SRC})
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3
HEADER = .
PATH_LIBFT = ./libft/libft.a

all: $(NAME)

%.o:%.c
		@${CC} ${CFLAGS} -c $< -o $@ -I${HEADER}

$(NAME): ${OBJ}
			@echo "			-> Compiling $(NAME)..."
			@make -C ./libft
			@${CC} ${OBJ} ${PATH_LIBFT} -o ${NAME}
			@echo "			-> Compiled $(NAME)"

clean:
		@rm -f ${OBJ}
		@make clean -C ./libft
fclean: clean
		@rm -f $(NAME)
		@make fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re