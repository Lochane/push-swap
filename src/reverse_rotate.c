/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:42:44 by lochane           #+#    #+#             */
/*   Updated: 2023/03/18 16:45:22 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_list **pile)
{
	t_list	*tmp;

	if (!(*pile))
		return ;
	tmp = (*pile);
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next->next = (*pile);
	*pile = tmp->next;
	tmp->next = NULL;
}

void	revers_rotate_both(t_list **pile_a, t_list **pile_b)
{
	reverse_rotate(pile_a);
	reverse_rotate(pile_b);
}
