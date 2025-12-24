/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:40:24 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/24 12:21:10 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void size_3(t_stack *stack);
void size_4(t_stack *a, t_stack *b);
void size_5(t_stack *a, t_stack *b);
int in_order(t_stack *stack);

void check_stack_size(t_stack *a, t_stack *b)
{
    if (a->size == 1)
        return(free_all(&a), exit(EXIT_SUCCESS));
    if (a->size == 2)
    {
        if (a->data[0] > a->data[1])
            return(sa(a));
    }
    if (a->size == 3)
        size_3(a);
    if (a->size == 4)
        size_4(a, b);
    if (a->size == 5)
        size_5(a, b);
}

void size_3(t_stack *stack)
{
    size_t i;

    i = 0;
    while(i < stack->size - 1)
    {
        if (stack->data[0] > stack->data[1] && stack->data[0] > stack->data[2])
            ra(stack);
        if (stack->data[0] > stack->data[1])
            sa(stack);
        if (stack->data[2] < stack->data[0] && stack->data[2] < stack->data[1])
            rra(stack);
        if (stack->data[1] > stack->data[0] && stack->data[1] > stack->data[2])
            rra(stack);
        i++;
    }
}

void size_4(t_stack *a, t_stack *b)
{
    size_t i;

    i = a->size;
    if (in_order(a))
            return ;
    minor_top(a);
    pb(a, b);
    size_3(a);
    pa(b, a);
}

void size_5(t_stack *a, t_stack *b)
{
    size_t i;

    i = a->size;
    if(in_order(a))
        return ;   
    minor_top(a);
    pb(a,b);
    size_4(a, b);
    pa(b, a);
}

int in_order(t_stack *stack)
{
    size_t i;

    i = 0;
    while(i < stack->size - 1)
    {
        if (stack->data[i] > stack->data[i + 1])
            return(0);
        i++;
    }
    return(1);
}


/* 5555 while (i > 0)
{
    if(in_order(a))
        return ;
    if (a->data[0] < a->data[1] && a->data[0] < a->data[2] 
        && a->data[0] < a->data[3] && a->data[0] < a->data[4])
        {
            pb(a, b);
            break;
        }
    else if (a->data[4] < a->data[0] && a->data[4] < a->data[1] 
        && a->data[4] < a->data[2] && a->data[4] < a->data[3])
        rra(a);
    else if (a->data[3] < a->data[0] && a->data[3] < a->data[1] 
        && a->data[3] < a->data[2] && a->data[3] < a->data[4])
        rra(a);
    else 
        ra(a);
    i--;
} */


/* 4444 while (i > 0)
{
    if (in_order(a))
        return ;
    if (a->data[1] < a->data[0] && a->data[1] < a->data[2] && 
        a->data[1] < a->data[3])
        ra(a);
    else if (a->data[3] < a->data[1] && a->data[3] < a->data[2] && 
        a->data[3] < a->data[0])
        rra(a);
    else if (a->data[0] < a->data[1] && a->data[0] < a->data[2] && 
        a->data[0] < a->data[3])
    {
        pb(a, b);
        break;
    }
    else
        ra(a);
    i--;
} */