/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:42:48 by lochane           #+#    #+#             */
/*   Updated: 2023/03/18 16:48:27 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_list **pile)
{
	t_list	*tmp;

	if (!(*pile))
		return ;
	tmp = (*pile);
	tmp = ft_lstlast(tmp);
	tmp->next = (*pile);
	(*pile) = (*pile)->next;
	tmp->next->next = NULL;
}

void	rotate_both(t_list **pile_a, t_list **pile_b)
{
	rotate(pile_a);
	rotate(pile_b);
}
