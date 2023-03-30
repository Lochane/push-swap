/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:29:18 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/30 18:10:49 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_list **src, t_list **dest, char c, t_data *data)
{
	t_list	*tmp;

	if (!src)
		return ;
	tmp = (*src);
	(*src) = (*src)->next;
	tmp->next = (*dest);
	(*dest) = tmp;
	if (c == 'a')
		data->move.pa += 1;
	if (c == 'b')
		data->move.pb += 1;
	data->move.total += 1;
	data->tmp_size = ft_lstsize((*src));
	data->mediane = (data->tmp_size / 2) + (data->tmp_size % 2);
	ft_printf("p%c\n", c);
}
