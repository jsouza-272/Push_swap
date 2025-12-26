/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:15:38 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/26 10:16:19 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void index_rotate(t_stack *stack)
{
    int tmp;
    size_t index;

    if (stack->size <= 1)
        return ;
    tmp = stack->indice[0];
    index = 0;
    while (index < stack->size - 1)
    {
        stack->indice[index] = stack->indice[index + 1];
        index++;
    }
    stack->indice[index] = tmp;
}
void ira(t_stack *a)
{
    index_rotate(a);
    ra(a);
}
void irb(t_stack *b)
{
    index_rotate(b);
    rb(b);
}
void irr(t_stack *a, t_stack *b)
{
    index_rotate(a);
    index_rotate(b);
    rr(a, b);
}