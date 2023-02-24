/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:46:28 by lsouquie          #+#    #+#             */
/*   Updated: 2023/02/25 00:35:16 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		ft_printf("%s", argv[i]);
// 		i++;
// 	}
// 	return (0);
// }

int	main(int argc, char **argv)
{
	t_data *data_a;

	data_a = build_data_struct(argc, argv);
	(void)data_a;
}
