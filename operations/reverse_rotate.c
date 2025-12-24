/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:11:38 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/22 11:11:39 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void rrotate(t_stack *stack)
{
    int tmp;
    size_t index;

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
void rra(t_stack *a)
{
    rrotate(a);
    ft_printf("rra\n");
}
void rrb(t_stack *b)
{
    rrotate(b);
    ft_printf("rrb\n");
}
void rrr(t_stack *a, t_stack *b)
{
    rrotate(a);
    rrotate(b);
    ft_printf("rrr\n");
}