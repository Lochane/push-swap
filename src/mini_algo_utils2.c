/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:37:43 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/23 01:10:14 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	hightest_down(t_list **stack, t_data *data)
{
	if (data->hightest_nbplace == 1)
		rotate(stack, 'a', data);
	if (data->hightest_nbplace == 2)
		reverse_rotate(stack, 'a', data);
}

void	manage_hightest(t_list **stack_a, t_list **stack_b, t_data *data)
{
	find_hightest((*stack_a), data);
	if (data->hightest_nbplace == 2)
		swap(stack_a, 'a', data);
	if (data->hightest_nbplace == 3)
	{
			rotate(stack_a, 'a', data);
			rotate(stack_a, 'a', data);
	}
	if (data->hightest_nbplace == 4)
	{
		if (data->size == 4)
			reverse_rotate(stack_a, 'a', data);
	}
	if (data->hightest_nbplace == 5)
		reverse_rotate(stack_a, 'a', data);
	push(stack_a, stack_b, 'b', data);
	}

void	manage_lowest(t_list **stack_a, t_list **stack_b, t_data *data)
{

	find_lowest((*stack_a), data);
	if (data->lowestnb_place == 2)
		swap(stack_a, 'a', data);
	if (data->lowestnb_place == 3)
	{
		rotate(stack_a, 'a', data);
		rotate(stack_a, 'a', data);
	}
	if (data->lowestnb_place == 4)
	{
			reverse_rotate(stack_a, 'a', data);
			reverse_rotate(stack_a, 'a', data);
	}
	if (data->lowestnb_place == 5)
		reverse_rotate(stack_a, 'a', data);
	push(stack_a, stack_b, 'b', data);
}
