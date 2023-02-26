/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:34:29 by lochane           #+#    #+#             */
/*   Updated: 2023/02/26 10:13:25 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_integrity(int argc)
{
	if (argc < 1)
		error_msg("Error:\nNo arguments\n", 0);
	if (argc < 3)
		error_msg("Error:\nYou need at least 3 arguments to start the program\n", 0);
}

void	check_nbr(t_data **data)
{
	t_data *temp;

	temp = *data;
	while(data && (*data))
	{
		if (ft_isdigit(temp->nbr) == 1)
		{
				error_msg("Error:\nAn invalid character as been found\nPlease enter only digital character\n", 0);
		}
		temp = temp->next;
	}
	
}
