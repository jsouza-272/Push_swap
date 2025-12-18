#include "../include/push_swap.h"

void rotate(t_stack *stack)
{
    int tmp;
    size_t index;

    if (stack->size <= 1)
        return ;
    tmp = stack->data[0];
    index = 0;
    while (index < stack->size - 1)
    {
        stack->data[index] = stack->data[index + 1];
        index++;
    }
    stack->data[index] = tmp;
}
void ra(t_stack *a)
{
    rotate(a);
    ft_printf("ra\n");
}
void rb(t_stack *b)
{
    rotate(b);
    ft_printf("rb\n");
}
void rr(t_stack *a, t_stack *b)
{
    rotate(a);
    rotate(b);
    ft_printf("rr\n");
}