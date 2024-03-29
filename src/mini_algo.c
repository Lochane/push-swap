/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:35:35 by lsouquie          #+#    #+#             */
/*   Updated: 2023/05/20 15:25:50 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting_threenb_algo(t_list **stack_a, t_data *data, int argc)
{
	if (argc == 4)
		hightest_down(stack_a, data);
	if (verify_stack((*stack_a), data) == 0)
		swap(stack_a, 'a', data);
}

void	sorting_fivenb_algo(t_list **stack_a, t_list **stack_b, \
t_data *data, int argc)
{
	int	closest;

	if (argc == 5)
		closest = find_lowest((*stack_a));
	else
		closest = who_is_closer((*stack_a), data);
	put_on_top(stack_a, stack_b, data, closest);
	if (data->size > 4)
	{
		put_on_top(stack_a, stack_b, data, find_lowest((*stack_a)));
		if (verify_stack((*stack_b), data) == 1)
			rotate(stack_b, 'b', data);
	}
	sorting_threenb_algo(stack_a, data, 4);
	push(stack_b, stack_a, 'a', data);
	if (verify_stack((*stack_a), data) == 0)
		rotate(stack_a, 'a', data);
	if (data->size > 4)
		push(stack_b, stack_a, 'a', data);
	if (verify_stack((*stack_a), data) == 0)
		rotate(stack_a, 'a', data);
}
