/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvlho <jvlho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 14:46:58 by jvlho             #+#    #+#             */
/*   Updated: 2025/12/25 14:59:33 by jvlho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t up_down(t_stack *a, t_chunk *chunk)
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

size_t down_up(t_stack *a, t_chunk *chunk)
{
    size_t f;

    f = a->size - 1;
    while (f > 0)
    {
        if (a->indice[f] >= chunk->start && a->indice[f] <= chunk->end)
            return (f);
        f--;
    }
    return (f);
}

void next_chunk(t_stack *a, t_chunk *chunk)
{
    size_t cost_ra;
    size_t cost_rra;

    cost_ra = up_down(a, chunk);
    cost_rra = a->size - down_up(a, chunk);
    while(!(a->indice[0] >= chunk->start && a->indice[0] <= chunk->end))
    {
        if (cost_ra < cost_rra)
            ira(a);
        else if (cost_rra < cost_ra)
            irra(a);
        else if (cost_ra == cost_rra)
            ira(a);
    }
}
