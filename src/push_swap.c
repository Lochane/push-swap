/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:46:28 by lsouquie          #+#    #+#             */
/*   Updated: 2023/02/25 02:44:30 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	//t_data *data_a;
	int i = 0;
	int  j = 0;

	while (i < argc)
	{
		while (argv[i][j])
		{
			printf("%c", argv[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	//check_integrity(argc, argv);
	//data_a = build_linkedlst_struct(argc, argv);
	//print_linkedlst(data_a);
}
