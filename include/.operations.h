/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:27:27 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/16 15:33:14 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "push_swap.h"

typedef struct e_stack
{
    char flag;
    size_t max_size;
    size_t size;
    long *data;
    int *indice;
} t_stack;

/**swap */

void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);

/**rotate */

void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);

/**reverse rotate */

void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);

/**push */

void pa(t_stack *b, t_stack *a);
void pb(t_stack *a, t_stack *b);

#endif