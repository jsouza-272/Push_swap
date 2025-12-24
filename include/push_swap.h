/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:26:52 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/24 15:22:25 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "ft_fprintf.h"
#include "ft_printf.h"
#include "libft.h"

#include <unistd.h>
#include <stdlib.h>

/**stack */
typedef struct s_stack
{
    char flag;
    size_t max_size;
    size_t size;
    long *data;
    int *indice;
} t_stack;

/**chunk */
typedef struct s_chunk
{
    int start;
    int end;
    int size;
} t_chunk;


/**checker */

void double_checker(long *array, int size, t_stack **stack);
void limit_checker(long *array, int size, t_stack **stack);
void first_checker(int ac, char **av);

/**helper */

int nbr_counter(char **av, unsigned int q_nbr);
void final_free(t_stack **a, t_stack **b);
void free_all(t_stack **stack);
int in_order(t_stack *stack);
void minor_top(t_stack *stack);
size_t find_minor(t_stack *stack);
int in_chunk(t_stack *a, t_chunk *chunk);
int last_is_minor(t_stack *stack, size_t last);
void organize_chunk(t_stack *b, t_chunk *chunk, t_stack *a);
void create_chunk(t_chunk *chunk, size_t stack_size);
void greater_to_top(t_stack *b);
size_t find_greater(t_stack *stack);


/**inicialization */

t_stack *init(int size, char flag);
void init_checker(int ac, char **av, t_stack **stack, char flag);
void populate_stack(t_stack **stack, char **av);
void populate_index(t_stack *a);

/**sort <= 5 */

void check_stack_size(t_stack *a, t_stack *b);

/**operations */

void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);
void pa(t_stack *b, t_stack *a);
void pb(t_stack *a, t_stack *b);

/**index operations */

void isa(t_stack *a);
void isb(t_stack *b);
void iss(t_stack *a, t_stack *b);
void ira(t_stack *a);
void irb(t_stack *b);
void irr(t_stack *a, t_stack *b);
void irra(t_stack *a);
void irrb(t_stack *b);
void irrr(t_stack *a, t_stack *b);
void ipa(t_stack *b, t_stack *a);
void ipb(t_stack *a, t_stack *b);

/**chunk */
void chunk(t_stack *a, t_stack *b);

/**sort last chunk */
void sort_last_chunk(t_stack *a, t_stack *b);


#endif