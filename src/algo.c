/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:05:49 by lsouquie          #+#    #+#             */
/*   Updated: 2023/05/03 13:57:36 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* Trouver les 2 plus petits
	push celui qui se trouve le plus proche du haut de la pile
	trier dans b pqr ordre decroissant
	push dans a*/

int	*lst_to_intarray(t_list *a, t_data *data)
{
	int i;
	int *tab;
	
	tab = malloc(sizeof(int) * (data->size + 1));
	i = 0;
	while (a)
	{
		tab[i]= *(int *)a->content;
		a = a->next;
		i++;
	}
	return (tab);
	
}

void	simplify_stack(t_list *a, t_data *data)
{
	int	i;
	int j;
	int *tab;

	i = 0;
	j = 0;
	tab = lst_to_intarray(a, data);
	while (i < data->size)
	{
		j = 0;
		while (j < data->size)
		{
			if (tab[i] > tab[j])
				a->index++;
			j++;
		}
		a = a->next;
		i++;
	}
	free(tab);
}

int	get_max_bits(t_data *data)
{
	int	max_bits;
	
	if (data->size <= 7)
		max_bits = 3;
	else if (data->size <= 15)
		max_bits = 4;
	else if (data->size <= 31)
		max_bits = 5;
	else if (data->size <= 63)
		max_bits = 6;
	else if (data->size <= 127)
		max_bits = 7;
	else if (data->size <= 255)
		max_bits = 8;
	else if (data->size <= 511)
		max_bits = 9;
	return (max_bits);
}

void	radix(t_list **a, t_list **b, t_data *data)
{
	t_list *tmp;
	int max_bits;
	int	i;
	int	j;

	i = 0;
	j = 0;
	max_bits = get_max_bits(data);
	simplify_stack(*(a), data);
	while (i < max_bits)
	{
		tmp = *a;
		while (j < data->size)
		{
			if (((tmp->index>>i)&1)== 1)
				rotate(a, 'a', data);
			else
				push(a, b, 'b', data);
			tmp = *a;
			j++;
		}
		while (*b)
			push(b, a, 'a', data);
		j = 0;
		i++;
	}
}	