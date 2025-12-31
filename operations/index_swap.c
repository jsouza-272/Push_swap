/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:11:26 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:19:53 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	index_swap(t_stack *stack)
{
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->indice[0];
	stack->indice[0] = stack->indice[1];
	stack->indice[1] = tmp;
}

void	isa(t_stack *a)
{
	index_swap(a);
	sa(a);
}

void	isb(t_stack *b)
{
	index_swap(b);
	sb(b);
}

void	iss(t_stack *a, t_stack *b)
{
	index_swap(a);
	index_swap(b);
	ss(a, b);
}
