/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:35:35 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/27 20:15:07 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting_threenb_algo(t_list **stack_a, t_data *data)
{
	hightest_down(stack_a, data);
	if (verify_stack((*stack_a), data) == 0)
		swap(stack_a, 'a', data);
}

void	hightest_down(t_list **stack, t_data *data)
{
	if (find_hightest((*stack)) == 1)
		rotate(stack, 'a', data);
	if (find_hightest((*stack)) == 2)
		reverse_rotate(stack, 'a', data);
}

void	sorting_fivenb_algo(t_list **stack_a, t_list **stack_b, t_data *data)
{
	int	i;

	i = data->size;
	while (i-- != 3)
		put_on_top(stack_a, stack_b, data);
	sorting_threenb_algo(stack_a, data);
	push(stack_b, stack_a, 'a', data);
	if (verify_stack((*stack_a), data) == 0)
		rotate(stack_a, 'a', data);
	push(stack_b, stack_a, 'a', data);
	if (verify_stack((*stack_a), data) == 0)
		rotate(stack_a, 'a', data);
}
