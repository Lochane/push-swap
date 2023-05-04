/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:29:08 by lsouquie          #+#    #+#             */
/*   Updated: 2023/05/04 14:41:48 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_msg(char *msg, int tofree, t_list **arg, t_data *data)
{
	if (tofree == 1)
		ft_lstclear(arg, &free);
	free(data);
	write(2, msg, ft_strlen(msg));
	exit (0);
}

long	ft_long_atoi(const char *str)
{
	int		i;
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

void	clear_progr(t_list **stack_a, t_list **stack_b, t_data *data)
{
	ft_lstclear(stack_a, &free);
	ft_lstclear(stack_b, &free);
	free(data);
	exit(1);
}
