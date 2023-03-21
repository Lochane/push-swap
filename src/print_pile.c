/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 02:21:23 by lochane           #+#    #+#             */
/*   Updated: 2023/03/06 13:54:13 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_lst(t_list *data)
{
	while (data)
	{
		ft_printf("%d\n\n", *(int *)data->content);
		data = data->next;
	}
}

void	print_result(t_list *stack_a ,t_list *stack_b)
{
	ft_printf("\n		stack A		|		stack_B		\n				|\n");
	if (stack_b)
	{
		while(stack_b)
		{
			ft_printf("		 %d		|		 %d		\n\n", *(int *)stack_a->content, *(int *)stack_b->content);
			print_lst(stack_b);	
			stack_a = stack_a->next;
			stack_b = stack_b->next;
		}
	}
	while (stack_a)
	{
		ft_printf("		 %d		|\n", *(int *)stack_a->content);
		stack_a = stack_a->next;
		(void)stack_b;
	}
	ft_printf("\n-----------------------------------------------------------------\n\n");
}
