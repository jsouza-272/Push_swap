/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:26:52 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/19 14:07:31 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "ft_fprintf.h"
#include "ft_printf.h"
#include "libft.h"

#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
    char flag;
    size_t max_size;
    size_t size;
    long *data;
    int *indice;
} t_stack;

/**checker */

void double_checker(long *array, int size, t_stack **stack);
void limit_checker(long *array, int size, t_stack **stack);
void first_checker(int ac, char **av);

/**helper */

int nbr_counter(char **av, unsigned int q_nbr);
void final_free(t_stack **a, t_stack **b);
void free_all(t_stack **stack);

/**inicialization */

t_stack *init(int size, char flag);
void init_checker(int ac, char **av, t_stack **stack, char flag);
void populate_stack(t_stack **stack, char **av);

/**sort <= 5 */

void check_stack_size(t_stack *a, t_stack *b);

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