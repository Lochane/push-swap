/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:42:44 by lochane           #+#    #+#             */
/*   Updated: 2023/03/21 02:09:43 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_list **stack)
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
	ft_printf("rr\n");
}

void	revers_rotate_both(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
