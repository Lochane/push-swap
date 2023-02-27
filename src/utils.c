/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:29:08 by lochane           #+#    #+#             */
/*   Updated: 2023/02/27 18:47:01 by lsouquie         ###   ########.fr       */
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

void	error_msg(char *msg, int tofree, t_data *data)
{
	if (tofree == 1)
		free_linkedlst(data);
	write(2, msg, ft_strlen(msg));
	exit (0);
	(void)tofree;
}

long	ft_long_atoi(const char *str)
{
	int	i;
	long	neg;
	long	nb;

	i = 0;
	nb = 0;
	neg = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		neg *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * (10) + (str[i] - 48);
		i++;
	}
	return (nb * neg);
}

void	free_linkedlst(t_data *data)
{
	while (data)
	{
		free(data->nbr);
		data = data->next;
	}
	free (data);
}
