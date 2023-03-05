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

void	push(t_list *src, t_list **dest)
{
	t_list *tmp;

	if (!src)
		return ;
	if (!(*dest))
	{
		(*dest) = ft_lstnew(src->content);
		if (!(*dest))
			error_msg("Error\n", 1, &src);
		tmp = src->next;
		*src = *tmp;
	}
	else
	{
			tmp = ft_lstnew(src->content);
			if (!tmp)
				error_msg("Error\n", 1, &src); // TODO clear dest dans error_msg
			ft_lstadd_front(dest, tmp);
			// print_lst(*dest);
	}
		// TODO clear src	
}