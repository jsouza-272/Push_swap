/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:03:00 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/17 16:55:57 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main (int argc, char **argv)
{
    t_stack *stack;
    
    stack = NULL;
    init_checker(argc, argv, &stack, 'a');
    ft_printf("flag: %c\tmax_size: %d\tsize: %d\n",stack->flag,stack->max_size, stack->size);
    int i=0;
    while(i < (int)stack->size)
    {
        ft_printf("data[%d]: %d\n", i, stack->data[i]);
        i++;
    }
    free_all(&stack);
    exit(EXIT_SUCCESS);
}