/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:46:28 by lsouquie          #+#    #+#             */
/*   Updated: 2023/05/04 16:48:07 by lsouquie         ###   ########.fr       */
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
	if (!data)
		exit (0);
	check_integrity(argv, argc, stack_a, data);
	stack_a = build_linkedlst_struct(argc, argv, data);
	initialise_struct(stack_a, data);
	if (verify_stack(stack_a, data) == 1)
		return (clear_progr(&stack_a, &stack_b, data), 0);
	if (argc == 4 || argc == 3)
		sorting_threenb_algo(&stack_a, data, argc);
	if (argc == 5 || argc == 6)
		sorting_fivenb_algo(&stack_a, &stack_b, data, argc);
	if (argc > 6)
		radix(&stack_a, &stack_b, data);
	clear_progr(&stack_a, &stack_b, data);
}
