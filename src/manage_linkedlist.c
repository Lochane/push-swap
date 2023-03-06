/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_linkedlist.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:33:31 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/06 13:53:33 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*build_linkedlst_struct(int argc, char **argv)
{
	t_list	*list;
	t_list	*newnode;
	int		i;

	list = NULL;
	list = create_newnode(ft_long_atoi(argv[1]), list);
	if (!list)
		error_msg("Error\n", 0, &list);
	i = 2;
	while (i < argc)
	{
		newnode = create_newnode(ft_long_atoi(argv[i]), list);
		if (!newnode)
			error_msg("Error\n", 1, &list);
		ft_lstadd_back(&list, newnode);
		i++;
	}
	if (check_double_nbr(list) == 0)
		error_msg("Error\n", 1, &list);
	return (list);
}

t_list	*create_newnode(long nbr, t_list *data)
{
	t_list	*node;
	int		*content;

	if (nbr > INT_MAX || nbr < INT_MIN)
		error_msg("Error\n", 1, &data);
	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	content = malloc(sizeof(int) * 1);
	if (!content)
	{
		free(node);
		return (NULL);
	}
	*content = nbr;
	node->content = content;
	node->next = NULL;
	return (node);
}

