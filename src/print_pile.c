/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pile.c                                       :+:      :+:    :+:   */
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

void	print_result(t_list *pile_a ,t_list *pile_b)
{
	ft_printf("\n		PILE A		|		PILE_B		\n				|\n");
	if (pile_b)
	{
		while(pile_b)
		{
			ft_printf("		 %d		|		 %d		\n\n", *(int *)pile_a->content, *(int *)pile_b->content);
			print_lst(pile_b);	
			pile_a = pile_a->next;
			pile_b = pile_b->next;
		}
	}
	while (pile_a)
	{
		ft_printf("		 %d		|\n", *(int *)pile_a->content);
		pile_a = pile_a->next;
		(void)pile_b;
	}
	ft_printf("\n-----------------------------------------------------------------\n\n");
}
