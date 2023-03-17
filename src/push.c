/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:29:18 by lsouquie           #+#    #+#             */
/*   Updated: 2023/02/28 23:29:19 by lsouquie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_list **src, t_list **dest)
{
	t_list *tmp;

	if (!src)
		return ;
	tmp = (*src);
	tmp->next = NULL;
	(*src) = (*src)->next;
	if (!(*dest))
		(*dest) = tmp;
	else
		ft_lstadd_front(dest, tmp);
	print_lst((*dest));
}