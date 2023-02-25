/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:34:29 by lochane           #+#    #+#             */
/*   Updated: 2023/02/25 02:34:03 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_integrity(int argc, char **argv)
{
	if (argc < 1)
		error_msg("Error:\nNo arguments\n", 0);
	if (argc < 3)
		error_msg("Error:\nYou need at least 3 arguments to start the program\n", 0);
	check_nbr(argc, argv);
}

void	check_nbr(int argc, char **argv)
{
	int	i;
	int	j;
	char c;

	i = 1;
	j = 0;
	c = argv[i][j];
	while(i < argc)
	{
		while (argv[i][j])
		{
			c = argv[i][j];
			ft_printf("%c\n", c);
			if ((argv[i][j] <= '0' && argv[i][j] >= '9') && argv[i][j] != '-')
			{
				ft_printf("Error:\nAn invalid character as been found\nIt takes place in the %d arguments\n", argc);
				error_msg("Please enter only digital character\n", 0);
			}
		j++;
		}
	i++;
	}
	
}
