/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:09:36 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/05 18:55:28 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>
# include <limits.h>

t_list	*build_linkedlst_struct(int argc, char **argv);
t_list	*create_newnode(long nbr, t_list *data);

void	print_result(t_list *pile_a ,t_list *pile_b);
void	print_lst(t_list *data);
void	error_msg(char *msg, int tofree, t_list **data);
void	free_linkedlst(t_list **data);
long	ft_long_atoi(const char *str);

void	check_integrity(char **argv, int argc, t_list *data);
int		check_double_nbr(t_list *data);
void	check_nbr(char **argv, int argc, t_list *data);


void swap(t_list **pile);
void	push(t_list *pile_a, t_list **pile_b);

#endif