/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:34:29 by lochane           #+#    #+#             */
/*   Updated: 2023/02/27 18:38:03 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_integrity(char **argv, int argc)
{
	if (argc < 1)
		error_msg("Error\n", 0);
	if (argc < 3)
		error_msg("Error\n", 0);
	check_nbr(argv, argc);
}

void	check_nbr(char **argv, int argc)
{
	int		i;
	size_t	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0 && (argv[i][j] != '-'
					&&  argv[i][j] != '+'))
				error_msg("Error\n", 0);
			if (argv[i][j] == '+' || argv[i][j] == '-')
			{
				if (ft_isdigit(argv[i][j + 1]) == 0)
					error_msg("Error\n", 0);
				if (ft_isdigit(argv[i][j - 1]) == 1)
					error_msg("Error\n", 0);
			}
		j++;
		}	
	i++;
	}
}

int	check_double_nbr(t_data *data)
{
	t_data	*tmp;

	while (data)
	{
		tmp = data->next;
		while (tmp)
		{
			if (data->nbr == tmp->nbr)
				return (0);
			tmp = tmp->next;
		}
		data = data->next;
	}
	return (1);
}
