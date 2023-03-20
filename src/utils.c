/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:29:08 by lsouquie          #+#    #+#             */
/*   Updated: 2023/03/20 16:00:22 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_msg(char *msg, int tofree, t_list **data)
{
	if (tofree == 1)
		ft_lstclear(data, &free);
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

void	clear_both_pile(t_list **pile_a, t_list **pile_b)
{
	ft_lstclear(pile_a, &free);
	ft_lstclear(pile_b, &free);
	exit(1);
}

// char	*linked_lst_to_tab(t_list *lst)
// {
	
// }
