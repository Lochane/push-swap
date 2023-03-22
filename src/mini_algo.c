/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:35:35 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/22 19:59:16 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting_threenb_algo(t_list **stack_a, t_data *data)
{
	find_hightest((*stack_a), data);
	hightest_down(stack_a, data);
	if (verify_stack((*stack_a), data) == 0)
		swap(stack_a, 'a', data);
	// if (verify_stack((*stack_a)) == 1)
	// 	return ;
}

void	sorting_fivenb_algo(t_list **stack_a, t_list **stack_b, t_data *data)
{
	int	i;

	i = -1;
	find_hightest((*stack_a), data);
	find_lowest((*stack_a), data);
	if (data->size == 4)
		manage_lowest(stack_a, stack_b, data);
	if (data->hightest_nbplace == 1 || data->lowestnb_place == 1)
	{
		push(stack_a, stack_b, 'b', data);
		manage_hightest(stack_a, stack_b, data);
	}
	else
	{
		manage_lowest(stack_a, stack_b, data);
		// manage_hightest(stack_a, stack_b, data);
	}
		// print_lst((*stack_a));
	// sorting_threenb_algo(stack_a, data);
	// push(stack_b, stack_a, 'a', data);
	// if (verify_stack((*stack_a), data) == 0)
	// 	rotate(stack_a, 'a', data);
	// push(stack_b, stack_a, 'a', data);
	// if (verify_stack((*stack_a), data) == 0)
	// 	rotate(stack_a, 'a', data);
	
	// print_lst((*stack_a));
}