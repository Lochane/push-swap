/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:43:46 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/27 13:59:15 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	initialise_struct(t_list *stack_a, t_data *data)
{
	data->hightest_nbplace = 1;
	data->lowestnb_place = 1;
	data->occurence_place = 0;
	data->size = ft_lstsize(stack_a);
	data->mediane = (data->size / 2) + (data->size % 2);
	initialise_move_struct(data);
}

void	initialise_move_struct(t_data *data)
{
	data->move.pa = 0;
	data->move.pb = 0;
	data->move.sa = 0;
	data->move.sb = 0;
	data->move.ss = 0;
	data->move.ra = 0;
	data->move.rb = 0;
	data->move.rr = 0;
	data->move.rra = 0;
	data->move.rrb = 0;
	data->move.rrr = 0;
	data->move.total = 0;
}