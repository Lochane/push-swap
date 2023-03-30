/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:29:15 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/30 17:42:43 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_list **stack, char c, t_data *data)
{
	void	*tmp;

	if (!(*stack) || (!(*stack)->next))
		return ;
	tmp = (*stack)->next->content;
	(*stack)->next->content = (*stack)->content;
	(*stack)->content = tmp;
	if (c == 'a')
		data->move.sa += 1;
	if (c == 'b')
		data->move.sb += 1;
	data->move.total += 1;
	ft_printf("s%c\n", c);
}

void	sswap(t_list **stack_a, t_list **stack_b, char c, t_data *data)
{
	swap(stack_a, c, data);
	swap(stack_b, c, data);
	data->move.ss += 1;
}
