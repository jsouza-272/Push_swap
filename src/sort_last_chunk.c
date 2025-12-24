/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_last_chunk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 13:59:50 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/24 15:49:48 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void little_sort(t_stack *a, t_stack *b)
{
    while (a->size > 5)
    {
        minor_top(a);
        pb(a, b);
    }
}

void sort_last_chunk(t_stack *a, t_stack *b)
{
    if (a->size <= 20)
    {
        if (a->size > 5)
            little_sort(a, b);
        if (a->size <= 5)
            check_stack_size(a, b);
    }
    else if (!in_order(a) && a->size > 10)
    {
        chunk(a, b);
    }
}