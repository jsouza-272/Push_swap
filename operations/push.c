#include "operations.h"

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
    int tmp;
    int index;
    if (b->size == 0)
        return ;
    move_stack(a);
    a->data[0] = b->data[0];
    a->data++;
    index = 0;
    while (index < b->size - 1)
    {
        b->data[index] = b->data[index + 1];
        index++;
    }
    b->size--;
}
void pb(t_stack *a, t_stack *b)
{
    int tmp;
    int index;
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
}
