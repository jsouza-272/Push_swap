/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_reverse_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:11:38 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:12:22 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_fprintf.h"
#include "../../include/ft_printf.h"
#include "../../include/libft.h"
#include "../../include/push_swap.h"
#include "../include/checker.h"

static void	rrotate(t_stack *stack)
{
	int		tmp;
	size_t	index;

	if (stack->size <= 1)
		return ;
	tmp = stack->data[stack->size - 1];
	index = stack->size - 1;
	while (index > 0)
	{
		index--;
		stack->data[index + 1] = stack->data[index];
	}
	stack->data[0] = tmp;
}

void	crra(t_stack *a)
{
	rrotate(a);
}

void	crrb(t_stack *b)
{
	rrotate(b);
}

void	crrr(t_stack *a, t_stack *b)
{
	rrotate(a);
	rrotate(b);
}
