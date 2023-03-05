/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:29:15 by lsouquie           #+#    #+#             */
/*   Updated: 2023/02/28 23:29:16 by lsouquie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void swap(t_list **pile)
{
	t_list *tmp;
	if((!(*pile)) || (!(*pile)->next))
		return ;
	
	print_lst((*pile));
}
