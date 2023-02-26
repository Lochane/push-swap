/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:29:08 by lochane           #+#    #+#             */
/*   Updated: 2023/02/26 10:39:55 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_linkedlst(t_data *data)
{
	while (data)
	{
		ft_printf("%d\n", data->nbr);
		data = data->next;
	}
}

void error_msg(char *msg, int tofree)
{
	write(2, msg, ft_strlen(msg));
	exit (0);
	(void)tofree;
}