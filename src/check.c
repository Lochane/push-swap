/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:34:29 by lsouquie          #+#    #+#             */
/*   Updated: 2023/05/04 14:27:57 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_integrity(char **argv, int argc, t_list *arg, t_data *data)
{
	if (argc < 1)
		error_msg("Error\n", 0, &arg, data);
	if (argc < 3)
		error_msg("Error\n", 0, &arg, data);
	check_nbr(argv, argc, arg, data);
}

void	check_nbr(char **argv, int argc, t_list *arg, t_data *data)
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
				&& argv[i][j] != '+'))
				error_msg("Error\n", 0, &arg, data);
			if (argv[i][j] == '+' || argv[i][j] == '-')
			{
				if (ft_isdigit(argv[i][j + 1]) == 0)
					error_msg("Error\n", 0, &arg, data);
				if (ft_isdigit(argv[i][j - 1]) == 1)
					error_msg("Error\n", 0, &arg, data);
			}
		j++;
		}	
	i++;
	}
}

int	check_double_nbr(t_list *arg)
{
	t_list	*tmp;

	while (arg)
	{
		tmp = arg->next;
		while (tmp)
		{
			if (*(int *)arg->content == *(int *)tmp->content)
				return (0);
			tmp = tmp->next;
		}
		arg = arg->next;
	}
	return (1);
}
