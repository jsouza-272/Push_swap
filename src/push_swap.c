/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:20:23 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/19 14:19:17 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void print_array(t_stack *stack)
{
    int i=0;
    while(i < (int)stack->size)
    {
        ft_printf("data[%d]: %d\n", i, stack->data[i]);
        i++;
    }
    ft_printf("\n"); 
}

int main (int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
        
    stack_a = NULL;
    init_checker(argc, argv, &stack_a, 'a');
    stack_b = init(nbr_counter(argv, 0), 'b');
    if (!stack_b)
        return(free_all(&stack_a), exit(EXIT_FAILURE), 1);
   /*  ft_printf("\nBAGUNCADO\n");
    print_array(stack_a); */
    if (stack_a->size <= 5)
        check_stack_size(stack_a, stack_b);
    /* ft_printf("\nARRUMADO\n");
    print_array(stack_a); */
    final_free(&stack_a, &stack_b);
}


/**
 * para fazer o chunk
 * organizar uma stack
 * verificar se o atual da stack verdadeira e igual a algum da stack falsa
 * colocar no stack->indece[(indice da satck verdadeira)] = (indice da stack falsa)
 * para isso fazer stack->indice = calloc(sizeof(int) * stack->max_size)
 * depois so fazer o chunk
 */