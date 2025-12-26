/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:03:37 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/26 15:59:44 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t find_next(t_stack *a, t_chunk *chunk)
{
    size_t i;

    i = 0;
    while (i < a->size)
    {
        if (a->indice[i] >= chunk->start && a->indice[i] <= chunk->end)
            return(i);
        i++;
    }
    return(i);
}

int help(t_chunk *chunk, t_stack *a)
{
    return(chunk->end >= (int)a->size - 1);
}

void chunk(t_stack *a, t_stack *b)
{
    t_chunk chunk;

    create_chunk(&chunk, a->size);
    populate_index(a);
    while (!in_order(a) && !help(&chunk, a))
    {
        while(in_chunk(a, &chunk))
        {
            if (a->indice[0] >= chunk.start && a->indice[0] <= chunk.end)
                organize_chunk(b, &chunk, a);
            else
                ira(a);
        }
        chunk.start += chunk.size;
        chunk.end += chunk.size;
    }
    sort_last_chunk(a, b);
    while (b->size > 0)
    {
        greater_to_top(b);
        ipa(b, a);
    }
}
