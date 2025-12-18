#include "../include/push_swap.h"

void move_stack(t_stack *stack)
{
    int index;
    index = stack->size;
    while (index > 0)
    {
        stack->data[index] = stack->data[index - 1];
        index--; 
    }
}

void pa(t_stack *b, t_stack *a)
{
    size_t index;

    if (b->size == 0)
        return ;
    move_stack(a);
    a->data[0] = b->data[0];
    a->size++;
    index = 0;
    while (index < b->size - 1)
    {
        b->data[index] = b->data[index + 1];
        index++;
    }
    b->size--;
    ft_printf("pa\n");
}
void pb(t_stack *a, t_stack *b)
{
    size_t index;

    if (a->size == 0)
        return ;
    move_stack(b);
    b->data[0] = a->data[0];
    b->size++;
    index = 0;
    while (index < a->size - 1)
    {
        a->data[index] = a->data[index + 1];
        index++;
    }
    a->size--;
    ft_printf("pb\n");
}
