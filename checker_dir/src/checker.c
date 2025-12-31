/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:02:17 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:13:30 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_fprintf.h"
#include "../../include/ft_printf.h"
#include "../../include/libft.h"
#include "../../include/push_swap.h"
#include "../include/checker.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	init_checker(ac, av, &stack_a, 'a');
	if (in_order(stack_a))
		return (ft_printf("OK\n"), free_all(&stack_a), 0);
	stack_b = init(stack_a->size, 'b');
	if (!stack_b)
		return (free_all(&stack_a), exit(EXIT_FAILURE), 1);
	populate_index(stack_a);
	test_exec(stack_a, stack_b);
	if (!in_order(stack_a) || stack_b->size > 0)
		return (ft_printf("KO\n"), final_free(&stack_a, &stack_b), 0);
	else if (in_order(stack_a) && stack_b->size == 0)
		return (ft_printf("OK\n"), final_free(&stack_a, &stack_b), 0);
}
