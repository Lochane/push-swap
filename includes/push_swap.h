/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:09:36 by lsouquie          #+#    #+#             */
/*   Updated: 2023/02/27 18:43:59 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>
# include <limits.h>

typedef struct s_data
{
	int				nbr;
	struct s_data	*next;
}	t_data;

t_data	*build_linkedlst_struct(int argc, char **argv);
t_data	*create_newnode(long nbr);
void	addnode_back(t_data **data, t_data *node);

void	print_linkedlst(t_data *data);
void	error_msg(char *msg, int tofree, t_data *data);
long	ft_long_atoi(const char *str);

void	check_integrity(char **argv, int argc);
int		check_double_nbr(t_data *data);
void	check_nbr(char **argv, int argc);

#endif