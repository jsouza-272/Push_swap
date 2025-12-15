#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include "operations/operations.h"

typedef struct e_stack
{
    char flag;
    size_t max_size;
    size_t size;
    long *data;
    int *indice;

} t_stack;


#endif