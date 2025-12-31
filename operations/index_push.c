/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:22:44 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:20:07 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	move_stack_index(t_stack *stack)
{
	int	index;

	index = stack->size;
	while (index > 0)
	{
		stack->indice[index] = stack->indice[index - 1];
		index--;
	}
}

void	ipa(t_stack *b, t_stack *a)
{
	size_t	index;

	if (b->size == 0)
		return ;
	move_stack_index(a);
	a->indice[0] = b->indice[0];
	index = 0;
	while (index < b->size - 1)
	{
		b->indice[index] = b->indice[index + 1];
		index++;
	}
	pa(b, a);
}

void	ipb(t_stack *a, t_stack *b)
{
	size_t	index;

	if (a->size == 0)
		return ;
	move_stack_index(b);
	b->indice[0] = a->indice[0];
	index = 0;
	while (index < a->size - 1)
	{
		a->indice[index] = a->indice[index + 1];
		index++;
	}
	pb(a, b);
}
