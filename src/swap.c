/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:29:15 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/06 14:25:56 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_list *pile)
{
	void	*tmp;
	
	if (!(pile) || (!(pile)->next))
		return ;
	tmp = pile->next->content;
	pile->next->content = pile->content;
	pile->content = tmp;
	print_lst(pile);
	// printf("%d\n", *(int *)(*pile)->next);
}