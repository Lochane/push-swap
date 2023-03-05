/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:46:28 by lsouquie          #+#    #+#             */
/*   Updated: 2023/02/28 23:26:08 by lsouquie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*pile_a;
	// t_list	*pile_b;

	pile_a = NULL;
	// pile_b = NULL;
	check_integrity(argv, argc, pile_a);
	pile_a = build_linkedlst_struct(argc, argv);
	print_lst(pile_a);	
	swap(&pile_a);

}
