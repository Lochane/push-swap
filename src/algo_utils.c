/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:46:03 by lochane           #+#    #+#             */
/*   Updated: 2023/03/28 04:15:33 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_hightest(t_list *stack)
{
	t_list	*tmp;
	int		i;
	int		rank;

	i = 1;
	rank = 0;
	tmp = stack;
	while (stack)
	{
		if (*(int *)stack->content >= *(int *)tmp->content)
		{
			tmp = stack;
			rank = i;
		}
		i++;
		stack = stack->next;
	}
	return (rank);
}

int	find_lowest(t_list *stack)
{
	t_list	*tmp;
	int		i;
	int		rank;

	i = 1;
	rank = 0;
	tmp = stack;
	while (stack)
	{
		if (*(int *)stack->content <= *(int *)tmp->content)
		{
			tmp = stack;
			rank = i;
		}
		i++;
		stack = stack->next;
	}
	return (rank);
}

int	find_two_lowest(t_list *stack, t_data *data)
{
	t_list	*tmp;
	int		i;
	int		rank;

	i = 1;
	rank = 0;
	tmp = stack;
	while (stack)
	{
		if (*(int *)stack->content <= *(int *)tmp->content
			&& data->lowestnb_place == 1)
		{
			tmp = stack->next;
			data->lowestnb_place = i;
		}
		else if (*(int *)stack->content <= *(int *)tmp->content && i != data->lowestnb_place)
		{
			tmp = stack;
			data->lowestnb_place2 = i;
		} 
		i++;
		stack = stack->next;
	}
	return (rank);
}

int	verify_stack(t_list *stack, t_data *data)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = stack->next;
	while (stack && tmp)
	{
		if (!(*(int *)stack->content < *(int *)tmp->content))
		{
			data->occurence_place = i;
			return (0);
		}
		tmp = tmp->next;
		stack = stack->next;
		i++;
	}
	return (1);
}

void	put_on_top(t_list **stack_a, t_list **stack_b, t_data *data, int i)
{
	if (i <= data->mediane && i != 1)
	{
		while (i-- != 1)
			rotate(stack_a, 'a', data);
	}
	if (i > data->mediane)
	{
		while (i <= data->size)
		{
			reverse_rotate(stack_a, 'a', data);
			i++;
		}
	}
	push(stack_a, stack_b, 'b', data);
}

int	who_is_closer(t_list *stack, t_data *data)
{
	int	nb_move;
	int	nb_move2;
	int	tmp;

	find_two_lowest(stack, data);
	nb_move = nb_move_count(data->lowestnb_place, data);
	nb_move2 = nb_move_count(data->lowestnb_place2, data);
	printf("first lowest place %d\n", data->lowestnb_place);
	printf("second lowest place %d\n", data->lowestnb_place2);
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
	int i;

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