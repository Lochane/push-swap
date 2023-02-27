/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_linkedlist.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:33:31 by lsouquie          #+#    #+#             */
/*   Updated: 2023/02/27 18:49:48 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_data	*build_linkedlst_struct(int argc, char **argv)
{
	t_data	*list;
	t_data	*newnode;
	int		i;

	list = create_newnode(ft_long_atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
		newnode = create_newnode(ft_long_atoi(argv[i]));
		addnode_back(&list, newnode);
		i++;
	}
	if (check_double_nbr(list) == 0)
		error_msg("Error\n", 0, list);
	return (list);
}

t_data	*create_newnode(long nbr, t_data *data)
{
	t_data	*node;

	if (nbr > INT_MAX || nbr < INT_MIN)
		error_msg("Error\n", 0);
	node = malloc(sizeof(t_data));
	if (!node)
		return (NULL);
	node->nbr = nbr;
	node->next = NULL;
	return (node);

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
