/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:46:03 by lochane           #+#    #+#             */
/*   Updated: 2023/03/21 04:13:33 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_occurence(t_list *stack)
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

void	find_hightest(t_list *stack, t_data *data)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	data->hightest_nbplace = 0;
	while (stack)
	{
		if (*(int *)stack->content > *(int *)tmp->content)
		{
			tmp = stack;
			data->hightest_nbplace = i;
		}
		i++;
		stack = stack->next;
	}
}

int	verify_stack(t_list *stack)
{
	t_list	*tmp;

	tmp = stack->next;
	while (stack)
	{
		if (!(*(int *)stack->content < *(int *)tmp->content) && tmp->content != NULL)
			return (0);
		stack = stack->next;
	}
	return (1);
}