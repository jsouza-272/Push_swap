#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "../push_swap.h"

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