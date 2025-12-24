int find_next_indice(t_stack *a, t_chunk *chunk)
{
    int i;

    i = 0;
    while (i < (int)a->size && !(a->indice[i] >= chunk->start 
        && a->indice[i] <= chunk->end))
        i++;
    if (a->indice[i] >= chunk->start 
        && a->indice[i] <= chunk->end)
        return(i);
    return(-1);
}

/**coloca o proximo elemento do chunk no topo */
void next_indice(t_stack *a, t_chunk *chunk)
{
    int next;

    next = find_next_indice(a, chunk);
    if (next == -1)
        return;
    while(!(a->indice[0] >= chunk->start && a->indice[0] <= chunk->end))
    {
        if (next > (int)a->size / 2)
            irra(a);
        else if (next <= (int)a->size / 2)
            ira(a);
    }
}

int help(t_chunk *chunk, t_stack *a)
{
    return(chunk->end >= (int)a->size - 1);
}

void chunk(t_stack *a, t_stack *b)
{
    t_chunk chunk;

    create_chunk(&chunk, a->size);
    populate_index(a);
    while (!in_order(a) && !help(&chunk, a))
    {
        while(in_chunk(a, &chunk))
        {
            if (a->indice[0] >= chunk.start && a->indice[0] <= chunk.end)
            {
                ipb(a, b);
                organize_chunk(b, &chunk, a);
            }
            next_indice(a, &chunk);
        }
        chunk.start += chunk.size;
        chunk.end += chunk.size;
    }
    sort_last_chunk(a, b);
    while (b->size > 0)
    {
        greater_to_top(b);
        ipa(b, a);
    }
}


void organize_chunk(t_stack *b, t_chunk *chunk, t_stack *a)
{
    if (b->size <= 1)
        return;
    if (b->indice[0] <= chunk->end / 2 && find_next_indice(a, chunk) <= chunk->size / 2)
            irr(a, b);
    else if (b->indice[0] <= chunk->end / 2)
        irb(b);
}