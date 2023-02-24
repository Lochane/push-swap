/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:09:36 by lsouquie          #+#    #+#             */
/*   Updated: 2023/02/25 00:34:09 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_data
{
	int				nbr;
	int 			size;
	struct s_data	*next;
}	t_data;

t_data	*build_data_struct(int argc, char **argv);
t_data	*create_newnode(int nbr);
void	addnode_back(t_data **data, t_data *node);
void	print_linkedlist(t_data *data);


#endif