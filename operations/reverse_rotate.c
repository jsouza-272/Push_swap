#include "operations.h"

void rrotate(t_stack *stack)
{
    int tmp;
    int index;
    if (stack->size <= 1)
        return ;
    tmp = stack->data[stack->size - 1];
    index = 0;
    while (index < stack->size - 1)
    {
        stack->data[index + 1] = stack->data[index];
        index++;
    }
    stack->data[0] = tmp;
}
void rra(t_stack *a)
{
    rrotate(a);
}
void rrb(t_stack *b)
{
    rrotate(b);
}
void rrr(t_stack *a, t_stack *b)
{
    rrotate(a);
    rrotate(b);
}