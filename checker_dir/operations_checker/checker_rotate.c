/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:11:35 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:12:28 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_fprintf.h"
#include "../../include/ft_printf.h"
#include "../../include/libft.h"
#include "../../include/push_swap.h"
#include "../include/checker.h"

static void	rotate(t_stack *stack)
{
	int		tmp;
	size_t	index;

	if (stack->size <= 1)
		return ;
	tmp = stack->data[0];
	index = 0;
	while (index < stack->size - 1)
	{
		stack->data[index] = stack->data[index + 1];
		index++;
	}
	stack->data[index] = tmp;
}

void	cra(t_stack *a)
{
	rotate(a);
}

void	crb(t_stack *b)
{
	rotate(b);
}

void	crr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
}
