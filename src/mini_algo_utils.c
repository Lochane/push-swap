/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:46:03 by lochane           #+#    #+#             */
/*   Updated: 2023/03/27 14:50:54 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_hightest(t_list *stack)
{
	t_list	*tmp;
	int		i;
	int		rank;

	i = 1;
	rank = 0;
	tmp = stack;
	while (stack)
	{
		if (*(int *)stack->content >= *(int *)tmp->content)
		{
			tmp = stack;
			rank = i;
		}
		i++;
		stack = stack->next;
	}
	return (rank);
}

void	find_lowest(t_list *stack, t_data *data)
{
	t_list	*tmp;
	int		i;
	int		rank;

	i = 1;
	rank = 0;
	tmp = stack;
	while (stack)
	{
		if (*(int *)stack->content <= *(int *)tmp->content)
		{
			tmp = stack;
			rank = i;
		}
		i++;
		stack = stack->next;
	}
	return (rank);
}

int	verify_stack(t_list *stack, t_data *data)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = stack->next;
	while (stack && tmp)
	{
		if (!(*(int *)stack->content < *(int *)tmp->content))
		{
			data->occurence_place = i;
			return (0);
		}
		tmp = tmp->next;
		stack = stack->next;
		i++;
	}
	return (1);
}
