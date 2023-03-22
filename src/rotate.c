/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:42:48 by lochane           #+#    #+#             */
/*   Updated: 2023/03/22 15:30:45 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_list **stack, char c, t_data *data)
{
	t_list	*tmp;

	if (!(*stack))
		return ;
	tmp = (*stack);
	tmp = ft_lstlast(tmp);
	tmp->next = (*stack);
	(*stack) = (*stack)->next;
	tmp->next->next = NULL;
	if (c == 'a')
		data->move.ra += 1;
	if (c == 'b')
		data->move.rb += 1;
	data->move.total += 1;
	ft_printf("r%c\n", c);
}

void	rrotate(t_list **stack_a, t_list **stack_b, char c, t_data *data)
{
	rotate(stack_a, c, data);
	rotate(stack_b, c, data);
	data->move.rr += 1;
}
