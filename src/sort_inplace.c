/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_inplace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 13:23:48 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/24 13:34:39 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void sort_inplace(t_stack *a)
{
    long middle;

    middle = a->indice[a->size / 2];
    while (!in_order(a))
    {
        if (a->indice[0] > middle)
            ira(a);
        else if (a->indice[a->size - 1] < middle)
            irra(a);
        else if (a->indice[0] == middle)
            isa(a);
    }
    
}