/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:46:03 by lsouquie          #+#    #+#             */
/*   Updated: 2023/05/04 13:55:08 by lsouquie         ###   ########.fr       */
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

int	find_lowest(t_list *stack)
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

void	find_two_lowest(t_list *stack, t_data *data)
{
	t_list	*tmp;
	int		i;

	i = 1;
	data->lowestnb_place = find_lowest(stack);
	if (data->lowestnb_place == 1)
		tmp = stack->next;
	else
		tmp = stack;
	while (stack)
	{
		if (*(int *)stack->content <= *(int *)tmp->content
			&& i != data->lowestnb_place)
		{
			tmp = stack;
			data->lowestnb_place2 = i;
		}
		i++;
		stack = stack->next;
	}
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

void	put_on_top(t_list **stack_a, t_list **stack_b, t_data *data, int i)
{
	if (i <= data->mediane && i != 1)
	{
		while (i-- != 1)
			rotate(stack_a, 'a', data);
	}
	if (i > data->mediane)
	{
		while (i <= data->tmp_size)
		{
			reverse_rotate(stack_a, 'a', data);
			i++;
		}
	}
	push(stack_a, stack_b, 'b', data);
}
