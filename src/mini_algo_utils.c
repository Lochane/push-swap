/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:46:03 by lochane           #+#    #+#             */
/*   Updated: 2023/03/23 01:08:18 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_hightest(t_list *stack, t_data *data)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = stack;
	while (stack)
	{
		if (*(int *)stack->content >= *(int *)tmp->content)
		{
			tmp = stack;
			data->hightest_nbplace = i;
		}
		i++;
		stack = stack->next;
	}
}

void	find_lowest(t_list *stack, t_data *data)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = stack;
	while (stack)
	{
		if (*(int *)stack->content <= *(int *)tmp->content)
		{
			tmp = stack;
			data->lowestnb_place = i;
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

int	find_a_place(t_list *stack)
{
	t_list	*tmp;

	tmp = stack->next;
	while (stack)
	{
		if ((*(int *)stack->content > *(int *)tmp->content)
			&& (*(int *)stack->content < *(int *)tmp->next->content))
			return (1);
		stack = stack->next;
	}
	return (0);
}