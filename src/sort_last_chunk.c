/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_last_chunk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 13:59:50 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/26 16:05:08 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void little_sort(t_stack *a, t_stack *b)
{
    while (a->size > 5)
    {
        minor_top(a);
        ipb(a, b);
    }
}

void sort_last_chunk(t_stack *a, t_stack *b)
{
    if (a->size <= 15)
    {
        little_sort(a, b);
        size_5(a, b);
    }
    else
        chunk(a, b);
}