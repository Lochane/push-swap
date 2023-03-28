/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:46:28 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/28 16:18:17 by lochane          ###   ########.fr       */
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
	initialise_struct(stack_a, data, argc);
	if (verify_stack(stack_a, data) == 1)
		return (clear_progr(&stack_a, &stack_b, data), 0);
	// printf ("clostest nb is at place = %d\n", who_is_closer(stack_a, data));
	// printf ("clostest nb is at place = %d\n", data->lowestnb_place);
	if (argc == 3)
		sorting_threenb_algo(&stack_a, data);
	if (argc == 5 || argc == 6)
		sorting_fivenb_algo(&stack_a, &stack_b, data, argc);

	
	printf("----------\n");
	print_lst(stack_a);
	printf("----------\n");
	// print_lst(stack_b);

	ft_printf("Total move = %d\n", data->move.total);
	clear_progr(&stack_a, &stack_b, data);
}
