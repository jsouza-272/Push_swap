/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:37:09 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 09:50:22 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_nbr_size(char *nbr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (ft_issignal(nbr[i]))
		i++;
	while (ft_isdigit(nbr[i]))
	{
		i++;
		count++;
	}
	return (count > 11);
}

void	limit_checker(long *array, int size, t_stack **stack)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (array[i] > INT_MAX || array[i] < INT_MIN)
			return (ft_fprintf(2, "Error\n"), free_all(stack),
				exit(EXIT_FAILURE));
		i++;
	}
}

void	double_checker(long *array, int size, t_stack **stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
				return (ft_fprintf(2, "Error\n"), free_all(stack),
					exit(EXIT_FAILURE));
			j++;
		}
		i++;
	}
}

void	first_checker(int ac, char **av)
{
	int	i;
	int	j;

	if (ac <= 1)
		return (ft_fprintf(2, "Error\n"), exit(EXIT_FAILURE));
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] && ((!ft_isdigit(av[i][j]) && !ft_isspace(av[i][j])
						&& !ft_issignal(av[i][j])) || (ft_issignal(av[i][j])
						&& !ft_isdigit(av[i][j + 1])) || (ft_isdigit(av[i][j])
						&& ft_issignal(av[i][j + +1]))))
				return (ft_fprintf(2, "Error\n", av[i][j]), exit(EXIT_FAILURE));
			j++;
		}
		i++;
	}
}

int	nbr_counter(char **av, unsigned int q_nbr)
{
	unsigned int	i;
	unsigned int	j;
	int				flag;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			flag = 0;
			while (ft_isdigit(av[i][j]) || av[i][j] == '+' || av[i][j] == '-')
			{
				j++;
				flag = 1;
			}
			while (ft_isspace(av[i][j]))
				j++;
			if (flag == 1)
				q_nbr++;
		}
		i++;
	}
	return (q_nbr);
}
