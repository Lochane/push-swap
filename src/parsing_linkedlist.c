/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_linkedlist.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:33:31 by lsouquie          #+#    #+#             */
/*   Updated: 2023/02/23 17:57:52 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	parsing(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_lstnew(argv[i]);
		prinft
		// argv[i] = ft_atoi(argv[i]);
		// if(argv[i] <= '0' && argv[i] >= '9')
		// 	ft_printf("Error\nIl n'y a pas aue des chiffres");
		// 	return ;
	i++;
	}
}