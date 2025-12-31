/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:19:27 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:19:36 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	index_rrotate(t_stack *stack)
{
	int		tmp;
	size_t	index;

	if (stack->size <= 1)
		return ;
	tmp = stack->indice[stack->size - 1];
	index = stack->size - 1;
	while (index > 0)
	{
		index--;
		stack->indice[index + 1] = stack->indice[index];
	}
	stack->indice[0] = tmp;
}

void	irra(t_stack *a)
{
	index_rrotate(a);
	rra(a);
}

void	irrb(t_stack *b)
{
	index_rrotate(b);
	rrb(b);
}

void	irrr(t_stack *a, t_stack *b)
{
	index_rrotate(a);
	index_rrotate(b);
	rrr(a, b);
}
