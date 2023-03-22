/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:46:03 by lochane           #+#    #+#             */
/*   Updated: 2023/03/22 20:01:46 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_hightest(t_list *stack, t_data *data)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = stack->next;
		printf("lowest is  = %d\n lol is = %d\n", *(int *)stack->content, *(int *)tmp->content);
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
	// printf("hightest is  = %d\n", data->hightest_nbplace);

}

void	find_lowest(t_list *stack, t_data *data)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = stack->next;
	print_lst(stack);
	while (stack)
	{
		if (*(int *)stack->content < *(int *)tmp->content)
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