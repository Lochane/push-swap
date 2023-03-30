/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:05:49 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/30 19:45:59 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* Trouver les 2 plus petits
	push celui qui se trouve le plus proche du haut de la pile
	trier dans b pqr ordre decroissant
	push dans a*/

void	sorting_nb(t_list **stack_a, t_list **stack_b, t_data *data)
{
	int	closest;

	closest = who_is_closer((*stack_a), data);
}