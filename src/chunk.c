/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:03:37 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/24 15:35:07 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int help(t_chunk *chunk, t_stack *a)
{
    return(chunk->end >= (int)a->size - 1);
}

void chunk(t_stack *a, t_stack *b)
{
    t_chunk chunk;

    create_chunk(&chunk, a->size);
    populate_index(a);
    while (!in_order(a) && chunk.start <= (int)a->max_size && !help(&chunk, a))
    {
        while(in_chunk(a, &chunk))
        {
            if (a->indice[0] >= chunk.start && a->indice[0] <= chunk.end)
            {
                ipb(a, b);
                organize_chunk(b, &chunk, a);
            }
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
