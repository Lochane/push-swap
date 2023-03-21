/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:29:15 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/21 02:08:30 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_list **stack)
{
	void	*tmp;

	if (!(*stack) || (!(*stack)->next))
		return ;
	tmp = (*stack)->next->content;
	(*stack)->next->content = (*stack)->content;
	(*stack)->content = tmp;
	ft_printf("sw\n");
}

void	swap_both(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
