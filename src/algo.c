/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:35:35 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/20 19:06:05 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting_three_algo(t_list **pile_a, t_list **pile_b, t_data *data)
{
	(void)pile_b;
	find_hightest((*pile_a), data);
}

t_list	*find_hightest(t_list *pile, t_data *data)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = pile;
	data->hightest_nbplace = 1;
	while (pile)
	{
		if (*(int *)pile->content > *(int *)tmp->content)
		{
			tmp = pile;
			data->hightest_nbplace = i;
		}
		i++;
		pile = pile->next;
	}
	printf("%d", data->hightest_nbplace);
	return (tmp);

}