/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:29:15 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/18 16:47:19 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_list **pile)
{
	void	*tmp;

	if (!(*pile) || (!(*pile)->next))
		return ;
	tmp = (*pile)->next->content;
	(*pile)->next->content = (*pile)->content;
	(*pile)->content = tmp;
}

void	swap_both(t_list **pile_a, t_list **pile_b)
{
	swap(pile_a);
	swap(pile_b);
}
