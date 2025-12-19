/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:22:58 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/19 14:20:13 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void init_checker(int ac, char **av, t_stack **stack, char flag)
{
    first_checker(ac, av);
    *stack = init(nbr_counter(av, 0), flag);
    if (!(*stack))
        return (ft_fprintf(2, "Error malloc stack\n"), exit(EXIT_FAILURE));
    populate_stack(stack, av);
    double_checker((*stack)->data, (*stack)->size, stack);
    limit_checker((*stack)->data, (*stack)->size, stack);
    /* ft_printf("DONE CHECKER\n"); */
}
