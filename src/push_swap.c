/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:46:28 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/21 04:08:12 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_data	*data;

	stack_a = NULL;
	stack_b = NULL;
	data = malloc(sizeof(t_data));
	check_integrity(argv, argc, stack_a);
	stack_a = build_linkedlst_struct(argc, argv, data);
	if (verify_stack(stack_a) == 1)
		return (clear_progr(&stack_a, &stack_b, data), 0);
	sorting_threenb_algo(&stack_a, data);
	print_lst(stack_a);


	clear_progr(&stack_a, &stack_b, data);
}
