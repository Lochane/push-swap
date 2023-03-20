/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:09:36 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/20 18:46:00 by lsouquie         ###   ########.fr       */
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

void	print_result(t_list *pile_a ,t_list *pile_b);
void	print_lst(t_list *data);

void	error_msg(char *msg, int tofree, t_list **data);
long	ft_long_atoi(const char *str);
void	clear_both_pile(t_list **pile_a, t_list **pile_b);
void	null_struc(t_data *data);

void	check_integrity(char **argv, int argc, t_list *data);
int		check_double_nbr(t_list *data);
void	check_nbr(char **argv, int argc, t_list *data);


void	push(t_list **src, t_list **dest);
void	swap(t_list **pile);
void	swap_both(t_list **pile_a, t_list **pile_b);
void	rotate(t_list **pile);
void	rotate_both(t_list **pile_a, t_list **pile_b);
void	reverse_rotate(t_list **pile);

void	sorting_three_algo(t_list **pile_a, t_list **pile_b, t_data *data);
t_list	*find_hightest(t_list *pile_a, t_data *data);





#endif