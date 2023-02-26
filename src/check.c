/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:34:29 by lochane           #+#    #+#             */
/*   Updated: 2023/02/26 16:48:51 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_integrity(char **argv, int argc)
{
	if (argc < 1)
		error_msg("Error:\nNo arguments\n", 0);
	if (argc < 3)
		error_msg("Error:\nYou need at least 3 arguments to start the program\n", 0);
	check_nbr(argv, argc);
}

void	check_nbr(char **argv, int argc)
{
	int i;
	size_t	j;
	
	i = 1;
	j = 0;
	while(i < argc)
	{
		while(j < ft_strlen(argv[i]))
		{

			if (ft_isdigit(argv[i][j]) == 0)
			{
				error_msg("Error:\nAn invalid character as been found\nPlease enter only digital character\n", 0);
			}
		j++;
		}	
	i++;
	}
	
}
