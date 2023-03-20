/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:46:28 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/20 18:50:23 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*pile_a;
	t_list	*pile_b;
	t_data	*data;

	pile_a = NULL;
	pile_b = NULL;
	data = malloc(sizeof(t_data));
	check_integrity(argv, argc, pile_a);
	pile_a = build_linkedlst_struct(argc, argv, data);
	sorting_three_algo(&pile_a, &pile_b, data);


	clear_both_pile(&pile_a, &pile_b);
}
