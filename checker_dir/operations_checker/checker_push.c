/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:11:48 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:12:14 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_fprintf.h"
#include "../../include/ft_printf.h"
#include "../../include/libft.h"
#include "../../include/push_swap.h"
#include "../include/checker.h"

static void	move_stack(t_stack *stack)
{
	int	index;

	if (!stack->size)
		return ;
	index = stack->size;
	while (index > 0)
	{
		stack->data[index] = stack->data[index - 1];
		index--;
	}
}

void	cpa(t_stack *b, t_stack *a)
{
	size_t	index;

	if (b->size == 0)
		return ;
	move_stack(a);
	a->data[0] = b->data[0];
	a->size++;
	index = 0;
	while (index < b->size - 1)
	{
		b->data[index] = b->data[index + 1];
		index++;
	}
	b->size--;
}

void	cpb(t_stack *a, t_stack *b)
{
	size_t	index;

	if (a->size == 0)
		return ;
	move_stack(b);
	b->data[0] = a->data[0];
	b->size++;
	index = 0;
	while (index < a->size - 1)
	{
		a->data[index] = a->data[index + 1];
		index++;
	}
	a->size--;
}
