CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

SRCDIR = src
OBJDIR = obj

SRCS = $(SRCDIR)/push_swap.c $(SRCDIR)/manage_linkedlist.c $(SRCDIR)/check.c $(SRCDIR)/utils.c \
		$(SRCDIR)/push.c $(SRCDIR)/swap.c $(SRCDIR)/rotate.c $(SRCDIR)/reverse_rotate.c \
		$(SRCDIR)/print_pile.c $(SRCDIR)/mini_algo.c $(SRCDIR)/mini_algo_utils.c \
		$(SRCDIR)/manage_struct.c $(SRCDIR)/mini_algo_utils2.c \
# INC = $(addprefix includes/, push_swap.h)
OBJS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRCS))
 

NAME = push_swap
LIBPATH = ./libft/libft.a

all: $(NAME)


$(NAME): $(OBJS) | lib
		@echo "			-> Compiling $(NAME)..."
		@$(CC) $(OBJS) $(LIBPATH) -o $@
		@echo "			-> Comstackd $(NAME)"

$(OBJDIR):
	@mkdir -p $(OBJDIR)
	
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

lib:
	@make -C ./libft

clean:
	@rm -rf $(OBJDIR)
	@make clean -C ./libft

fclean: clean
		@rm -f $(NAME)
		@make fclean -C ./libft

norme:
		norminette $(SRCS)

re: fclean all

.PHONY: all lib clean fclean re norme
	
