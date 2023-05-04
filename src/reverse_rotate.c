/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:42:44 by lsouquie          #+#    #+#             */
/*   Updated: 2023/05/04 13:54:10 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_list **stack, char c, t_data *data)
{
	t_list	*tmp;

	if (!(*stack))
		return ;
	tmp = (*stack);
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next->next = (*stack);
	*stack = tmp->next;
	tmp->next = NULL;
	if (c == 'a')
		data->move.rra += 1;
	if (c == 'b')
		data->move.rrb += 1;
	data->move.total += 1;
	ft_printf("rr%c\n", c);
}

void	rreverse_rotate(t_list **stack_a, t_list **stack_b, char c
						, t_data *data)
{
	reverse_rotate(stack_a, c, data);
	reverse_rotate(stack_b, c, data);
	data->move.rrr += 1;
}
