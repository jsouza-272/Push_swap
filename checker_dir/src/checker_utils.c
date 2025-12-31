/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:21:27 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:13:44 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_fprintf.h"
#include "../../include/ft_printf.h"
#include "../../include/libft.h"
#include "../../include/push_swap.h"
#include "../get_next_line/get_next_line.h"
#include "../include/checker.h"

int	is_operator(int c)
{
	return (c == 'r' || c == 'a' || c == 'b' || c == 'p' || c == 's'
		|| c == '\n');
}

int	check_op(char *op)
{
	int	i;

	i = 0;
	while (op[i])
	{
		if (!is_operator(op[i]))
			return (ft_fprintf(2, "Error\n"), -1);
		i++;
	}
	return (1);
}

int	execute(t_stack *a, t_stack *b, char *op)
{
	if (check_op(op) == -1)
		return (final_free(&a, &b), -1);
	if (!ft_strncmp("pa", op, 2))
		cpa(b, a);
	else if (!ft_strncmp("pb", op, 2))
		cpb(a, b);
	else if (!ft_strncmp("sa", op, 2))
		csa(a);
	else if (!ft_strncmp("sb", op, 2))
		csb(b);
	else if (!ft_strncmp("ra", op, 2))
		cra(a);
	else if (!ft_strncmp("rb", op, 2))
		crb(b);
	else if (!ft_strncmp("rra", op, 3))
		crra(a);
	else if (!ft_strncmp("rrb", op, 3))
		crrb(b);
	else if (!ft_strncmp("rr", op, 2))
		crr(a, b);
	else if (!ft_strncmp("rrr", op, 3))
		crrr(a, b);
	return (0);
}

void	test_exec(t_stack *a, t_stack *b)
{
	char	*op;

	op = get_next_line(0);
	while ((op && !in_order(a)) || b->size > 0)
	{
		if (execute(a, b, op) == -1)
			return (free(op), exit(EXIT_FAILURE));
		free(op);
		op = get_next_line(0);
	}
}
