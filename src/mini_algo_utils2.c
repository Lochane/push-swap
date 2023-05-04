/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:52:51 by lsouquie          #+#    #+#             */
/*   Updated: 2023/05/04 14:07:18 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	who_is_closer(t_list *stack, t_data *data)
{
	int	nb_move;
	int	nb_move2;
	int	tmp;

	find_two_lowest(stack, data);
	nb_move = nb_move_count(data->lowestnb_place, data);
	nb_move2 = nb_move_count(data->lowestnb_place2, data);
	if (nb_move2 < nb_move)
		return (data->lowestnb_place2);
	else
	{
		tmp = data->lowestnb_place;
		data->lowestnb_place = data->lowestnb_place2;
		data->lowestnb_place2 = tmp;
		return (data->lowestnb_place2);
	}
}

int	nb_move_count(int nb, t_data *data)
{
	int	i;

	i = 0;
	if (nb <= data->mediane)
	{
		while (nb != 1)
		{
			i++;
			nb--;
		}
	}	
	if (nb > data->mediane)
	{
		while (nb <= data->size)
		{
			i++;
			nb++;
		}
	}
	return (i);
}

void	hightest_down(t_list **stack, t_data *data)
{
	if (find_hightest((*stack)) == 1)
		rotate(stack, 'a', data);
	if (find_hightest((*stack)) == 2)
		reverse_rotate(stack, 'a', data);
}
