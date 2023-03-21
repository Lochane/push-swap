/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:35:35 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/21 04:07:57 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting_threenb_algo(t_list **stack_a, t_data *data)
{
	find_hightest((*stack_a), data);
	place_hightest(stack_a, data);
	// printf("Lol");
	if (find_occurence((*stack_a)) == 1)
		swap(stack_a);
	printf("poouet");
	if (verify_stack((*stack_a)) == 1)
		return ;
}

void	place_hightest(t_list **stack, t_data *data)
{
	if (data->hightest_nbplace == 0)
		rotate(stack);
	if (data->hightest_nbplace == 1)
		reverse_rotate(stack);
	printf("%d\n", data->hightest_nbplace);
}

// void	sorting_fivenb_algo(t_list **stack_a, t_list **stack_b, t_data *data)
// {
	
// }