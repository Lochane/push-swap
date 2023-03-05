# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsouquie <lsouquie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 15:42:20 by lsouquie          #+#    #+#              #
#    Updated: 2023/02/28 23:29:06 by lsouquie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = $(addprefix src/, push_swap manage_linkedlist check utils push swap rotate reverse_rotate print_pile)

OBJ = $(addsuffix .o, ${SRC})
OBJ := $(addprefix obj/, $(OBJ))
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3
HEADER = .
PATH_LIBFT = ./libft/libft.a

all: $(NAME)

obj/%.o:	%.c
		@mkdir -p $(dir $@)
		@${CC} ${CFLAGS} -c $< -o $@ -I${HEADER}

$(NAME): $(OBJFLDR) ${OBJ}
			@echo "			-> Compiling $(NAME)..."
			@make -C ./libft
			@${CC} ${OBJ} ${PATH_LIBFT} -o ${NAME}
			@echo "			-> Compiled $(NAME)"
${OBJFLDR}:
		@mkdir -p .obj/

clean:
		@rm -rf obj
		@make clean -C ./libft
fclean: clean
		@rm -f $(NAME)
		@make fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re
