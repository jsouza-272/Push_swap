/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:20:43 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/26 10:58:20 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t find_minor(t_stack *stack)
{
    long minor;
    size_t index;
    size_t m_index;

    minor = stack->data[0];
    m_index = 0;
    index = 1;
    while (index < stack->size)
    {
        if (minor > stack->data[index])
        {
            minor = stack->data[index];
            m_index = index;
        }
        index++;
    }
    return(m_index);
}

void minor_top(t_stack *stack)
{
    size_t locate_minor;

    locate_minor = find_minor(stack);
    while (locate_minor > 0)
    {
        if (locate_minor > stack->size / 2 && stack->flag == 'a')
            irra(stack);
        else if (locate_minor > stack->size / 2 && stack->flag == 'b')
            irrb(stack);
        else if (locate_minor <= stack->size / 2 && stack->flag == 'a')
            ira(stack);
        else if (locate_minor <= stack->size / 2 && stack->flag == 'b')
            irb(stack);
        locate_minor = find_minor(stack);
    }
}

int in_chunk(t_stack *a, t_chunk *chunk)
{
    size_t i;

    i = 0;
    while (i < a->size)
    {
        if (a->indice[i] >= (*chunk).start && a->indice[i] <= (*chunk).end)
            return(1);
        i++;
    }
    return(0);
}

void organize_chunk(t_stack *b, t_chunk *chunk, t_stack *a)
{
    int mid;

    mid = chunk->start + chunk->size / 2;
    ipb(a, b);
    if (b->size <= 1)
        return;
    if (b->indice[0] <= mid && !(a->indice[0] >= chunk->start 
        && a->indice[0] <= chunk->end))
            irr(a, b);
    else if (b->indice[0] <= mid)
        irb(b);
}