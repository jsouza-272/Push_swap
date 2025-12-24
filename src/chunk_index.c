/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:19:36 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/23 10:53:43 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void copy_stack(t_stack *dest, t_stack *src);
void copy_index(t_stack *stack, t_stack *a);

void populate_index(t_stack *a)
{
    t_stack *stack;

    stack = malloc(sizeof(t_stack));
    if(!stack)
        return(ft_fprintf(2,"Error fstack"), exit(EXIT_FAILURE));
    stack->data = ft_calloc(a->max_size, sizeof(long));
    if(!stack->data)
        return(ft_fprintf(2,"Error fstack.data"), exit(EXIT_FAILURE));
    stack->indice = ft_calloc(a->max_size, sizeof(int));
    if(!stack->indice)
        return(ft_fprintf(2,"Error fstack.data"), exit(EXIT_FAILURE));
    copy_stack(stack, a);
    copy_index(stack, a);
    free_all(&stack);
}

void copy_stack(t_stack *dest, t_stack *src)
{
    size_t i;
    
    i=0;
    dest->flag = src->flag;
    dest->size = src->size;
    dest->max_size = src->max_size;
    while(i < src->size)
    {
        dest->data[i] = src->data[i];
        i++;
    }
}

void bubble(t_stack *stack)
{
    size_t i;
    size_t j;
    long tmp;
    
    i = 0;
    tmp = 0;
    while (i < stack->size && !in_order(stack))
    {
        j = 0;
        while (j < stack->size - 1)
        {
            if (stack->data[j] > stack->data[j + 1])
            {
                tmp = stack->data[j];
                stack->data[j] = stack->data[j + 1];
                stack->data[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}

void copy_index(t_stack *stack, t_stack *a)
{
    size_t i;
    size_t j;

    i = 0;
    bubble(stack);
    while (i < stack->size)
    {
        stack->indice[i] = i;
        i++;
    }
    i = 0;
    j = 0;
    while(i < a->size)
    {
        if (a->data[i] == stack->data[j])
        {
            a->indice[i] = stack->indice[j];
            i = 0;
            j++; 
        }
        else
            i++;
    }
}
