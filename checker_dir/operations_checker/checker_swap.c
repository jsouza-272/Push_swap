/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:11:30 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:12:33 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_fprintf.h"
#include "../../include/ft_printf.h"
#include "../../include/libft.h"
#include "../../include/push_swap.h"
#include "../include/checker.h"

static void	swap(t_stack *stack)
{
	long	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->data[0];
	stack->data[0] = stack->data[1];
	stack->data[1] = tmp;
}

void	csa(t_stack *a)
{
	swap(a);
}

void	csb(t_stack *b)
{
	swap(b);
}

void	css(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
}
