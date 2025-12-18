#include "../include/push_swap.h"

void swap(t_stack *stack)
{
    long tmp;
    if (stack->size < 2)
        return ;
    tmp = stack->data[0];
    stack->data[0] = stack->data[1];
    stack->data[1] = tmp;
}

void sa(t_stack *a)
{
    swap(a);
    ft_printf("sa\n");
}

void sb (t_stack *b)
{
    swap(b);
    ft_printf("sb\n");
}

void ss (t_stack *a, t_stack *b)
{
    swap(a);
    swap(b);
    ft_printf("ss\n");
}