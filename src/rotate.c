/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:42:48 by lochane           #+#    #+#             */
/*   Updated: 2023/03/21 02:08:37 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*tmp;

	if (!(*stack))
		return ;
	tmp = (*stack);
	tmp = ft_lstlast(tmp);
	tmp->next = (*stack);
	(*stack) = (*stack)->next;
	tmp->next->next = NULL;
	ft_printf("r\n");
}

void	rotate_both(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
