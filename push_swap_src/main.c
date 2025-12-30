/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:20:23 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/29 16:12:45 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main (int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;

    stack_a = NULL;
    init_checker(argc, argv, &stack_a, 'a');
    stack_b = init(stack_a->size, 'b');
    if (!stack_b)
        return(free_all(&stack_a), exit(EXIT_FAILURE), 1);
    populate_index(stack_a);
    if (stack_a->size <= 5)
        check_stack_size(stack_a, stack_b);
    else if (!in_order(stack_a))
        chunk(stack_a, stack_b);
    final_free(&stack_a, &stack_b);
}
