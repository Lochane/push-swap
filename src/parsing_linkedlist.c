/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_linkedlist.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:33:31 by lsouquie          #+#    #+#             */
/*   Updated: 2023/02/25 00:40:08 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_data	*build_data_struct(int argc, char **argv)
{
	t_data	*stack;
	t_data	*newnode;
	int		i;

	stack = create_newnode(ft_atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
		newnode = create_newnode(ft_atoi(argv[i]));
		addnode_back(&stack, newnode);
		i++;
	}
	print_linkedlist(stack);
	return(stack);
}

t_data	*create_newnode(int nbr)
{
	t_data	*node;

	node = malloc(sizeof(t_data));
	if (!node)
		return(NULL);
	node->nbr = nbr;
	node->next = NULL;
	return(node);
	
}

void	addnode_back(t_data **data, t_data *node)
{
	t_data	*temp;
	
	temp = *data;
	if (data && (*data))
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	else
	*data = node;
}

void	print_linkedlist(t_data *data)
{
	while (data)
	{
		ft_printf("%d\n", data->nbr);
		data = data->next;
	}
}