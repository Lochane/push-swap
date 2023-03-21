/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:09:36 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/21 04:10:00 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <limits.h>

typedef struct s_data
{
	int	hightest_nbplace;
	int	size;
}	t_data;

t_list	*build_linkedlst_struct(int argc, char **argv, t_data *data);
t_list	*create_newnode(long nbr, t_list *data);

void	print_result(t_list *stack_a ,t_list *stack_b);
void	print_lst(t_list *data);

void	error_msg(char *msg, int tofree, t_list **data);
long	ft_long_atoi(const char *str);
void	clear_progr(t_list **stack_a, t_list **stack_b, t_data *data);
void	null_struc(t_data *data);

void	check_integrity(char **argv, int argc, t_list *data);
int		check_double_nbr(t_list *data);
void	check_nbr(char **argv, int argc, t_list *data);


void	push(t_list **src, t_list **dest);
void	swap(t_list **stack);
void	swap_both(t_list **stack_a, t_list **stack_b);
void	rotate(t_list **stack);
void	rotate_both(t_list **stack_a, t_list **stack_b);
void	reverse_rotate(t_list **stack);

void	sorting_threenb_algo(t_list **stack_a, t_data *data);
void	place_hightest(t_list **stack, t_data *data);

int		verify_stack(t_list *stack);
void	find_hightest(t_list *stack_a, t_data *data);
int		find_occurence(t_list *stack);





#endif