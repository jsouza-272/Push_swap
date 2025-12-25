/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvlho <jvlho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 11:58:01 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/25 15:27:06 by jvlho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int last_is_minor(t_stack *stack, size_t last)
{
    return(last - 1 == find_minor(stack));
}

int greater_on_top(t_stack *stack)
{
    return(0 == find_greater(stack));
}

void create_chunk(t_chunk *chunk, size_t stack_size)
{
    if (stack_size <= 100)
    {
        chunk->size = stack_size / 3;
    }
    else if (stack_size <= 500)
    {
        chunk->size = stack_size / 7;
    }
    else
    {
        chunk->size = stack_size / 50;
    }
    chunk->start = 0;
    chunk->end = chunk->size;
}

size_t find_greater(t_stack *stack)
{
    long greater;
    size_t index;
    size_t m_index;

    greater = stack->data[0];
    m_index = 0;
    index = 1;
    while (index < stack->size)
    {
        if (greater < stack->data[index])
        {
            greater = stack->data[index];
            m_index = index;
        }
        index++;
    }
    return(m_index);
}

void greater_to_top(t_stack *b)
{
    size_t locate_greater;

    locate_greater = find_greater(b);
    while(locate_greater != 0)
    {
        if (locate_greater <= b->size / 2)
            irb(b);
        else
            irrb(b);
        locate_greater = find_greater(b);
    }
}
