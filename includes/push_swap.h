/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:09:36 by lsouquie          #+#    #+#             */
/*   Updated: 2023/05/04 16:33:41 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <limits.h>

typedef struct s_move
{
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	total;

}	t_move;
typedef struct s_data
{
	int		occurence_place;
	int		hightest_nbplace;
	int		lowestnb_place;
	int		lowestnb_place2;
	int		tmp_size;
	int		size;
	int		mediane;
	t_move	move;
}	t_data;

/* Manage linkedlist */

t_list	*build_linkedlst_struct(int argc, char **argv, t_data *data);
t_list	*create_newnode(long nbr, t_list *list, t_data *data);

/* Manage struct */

void	initialise_move_struct(t_data *data);
void	initialise_struct(t_list *stack_a, t_data *data);

/* Utils */

void	error_msg(char *msg, int tofree, t_list **arg, t_data *data);
long	ft_long_atoi(const char *str);
void	clear_progr(t_list **stack_a, t_list **stack_b, t_data *data);

/* Check */

void	check_integrity(char **argv, int argc, t_list *arg, t_data *data);
int		check_double_nbr(t_list *arg);
void	check_nbr(char **argv, int argc, t_list *arg, t_data *data);

/* Moves */

void	push(t_list **src, t_list **dest, char c, t_data *data);
void	swap(t_list **stack, char c, t_data *data);
void	sswap(t_list **stack_a, t_list **stack_b, char c, t_data *data);
void	rotate(t_list **stack, char c, t_data *data);
void	rrotate(t_list **stack_a, t_list **stack_b, char c, t_data *data);
void	reverse_rotate(t_list **stack, char c, t_data *data);
void	rreverse_rotate(t_list **stack_a, t_list **stack_b, char c,
			t_data *data);

/* Mini algo */

void	sorting_threenb_algo(t_list **stack_a, t_data *data, int argc);
void	sorting_fivenb_algo(t_list **stack_a, t_list **stack_b, \
t_data *data, int argc);

/* Mini algo utils */

int		find_hightest(t_list *stack_a);
int		find_lowest(t_list *stack);
int		verify_stack(t_list *stack, t_data *data);
void	find_two_lowest(t_list *stack, t_data *data);
void	put_on_top(t_list **stack_a, t_list **stack_b, t_data *data, int i);

/* Mini algo utils 2 */

int		who_is_closer(t_list *stack, t_data *data);
int		nb_move_count(int nb, t_data *data);
void	hightest_down(t_list **stack, t_data *data);

/* Algo */

void	simplify_stack(t_list *a, t_data *data);
int		*lst_to_intarray(t_list *a, t_data *data);
int		get_max_bits(t_data *data);
void	radix(t_list **a, t_list **b, t_data *data);

#endif