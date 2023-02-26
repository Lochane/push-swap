/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:09:36 by lsouquie          #+#    #+#             */
/*   Updated: 2023/02/26 10:29:39 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>

typedef struct s_data
{
	int				nbr;
	struct s_data	*next;
}	t_data;

t_data	*build_linkedlst_struct(int argc, char **argv);
t_data	*create_newnode(int nbr);
void	addnode_back(t_data **data, t_data *node);


void	print_linkedlst(t_data *data);
void error_msg(char *msg, int tofree);

void	check_integrity(int argc);
void	check_nbr(t_data *data);


#endif