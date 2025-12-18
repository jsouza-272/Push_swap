/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:20:23 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/18 13:26:00 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main (int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
        
    stack_a = NULL;
    init_checker(argc, argv, &stack_a, 'a');
    stack_b = init(nbr_counter(argv, 0), 'b');
    ft_printf("\nBAGUNCADO\n");
    int i=0;
    while(i < (int)stack_a->size)
    {
        ft_printf("data[%d]: %d\n", i, stack_a->data[i]);
        i++;
    }
    ft_printf("\n");
    if (stack_a->size <= 5)
        check_stack_size(stack_a, stack_b);
    i=0;
    ft_printf("\nARRUMADO\n");
    while(i < (int)stack_a->size)
    {
        ft_printf("data[%d]: %d\n", i, stack_a->data[i]);
        i++;
    }
    final_free(&stack_a, &stack_b);
}
