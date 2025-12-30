/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:16:50 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/29 15:49:36 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*init(int size, char flag)
{
	t_stack	*stack;

	if (flag != 'a' && flag != 'b')
		return (ft_fprintf(2, "Error\n"), exit(EXIT_FAILURE), NULL);
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (ft_fprintf(2, "Error\n"), exit(EXIT_FAILURE), NULL);
	stack->size = size;
	stack->data = ft_calloc(size + 1, sizeof(long));
	if (!stack->data)
		return (ft_fprintf(2, "Error\n"), free_all(&stack), NULL);
	stack->indice = ft_calloc(size + 1, sizeof(int));
	if (!stack->indice)
		return (ft_fprintf(2, "Error\n"), free_all(&stack), NULL);
	stack->flag = flag;
	stack->max_size = size + 1;
	if(stack->flag == 'b')
		stack->size = 0;
	return (stack);
}

char	*got_to_nex_nbr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (ft_isdigit(s[i]) || s[i] == '-' || s[i] == '+')
			i++;
		while (ft_isspace(s[i]))
			i++;
		if (ft_isdigit(s[i]) || s[i] == '-' || s[i] == '+')
			return (s + i);
	}
	return (NULL);
}

void	populate_stack(t_stack **stack, char **av)
{
	unsigned int	i[3];

	if (!stack || !*stack || ((*stack)->flag != 'a' && (*stack)->flag != 'b'))
		return (ft_fprintf(2, "Error\n"), free_all(stack), exit(EXIT_FAILURE));
	if ((*stack)->flag == 'b')
	{
		(*stack)->size = 0;
		return ;
	}
	i[0] = 1;
    i[1] = 0;
    i[2] = 0;
	while (av[i[0]])
	{
		if (check_nbr_size(av[i[0]]))
			return(ft_fprintf(2, "Error\n"), free_all(stack), exit(EXIT_FAILURE));
		(*stack)->data[i[1]] = ft_atol(av[i[0]]);
		i[1]++;
		av[i[0]] = got_to_nex_nbr(av[i[0]]);
		if (!av[i[0]])
			i[0]++;
	}
}

void free_all(t_stack **stack)
{
    free((*stack)->data);
	free((*stack)->indice);
    free(*stack);
}

void final_free(t_stack **a, t_stack **b)
{
    free((*a)->data);
	if ((*a)->indice)
		free((*a)->indice);
    free(*a);
	free((*b)->data);
	if ((*b)->indice)
		free((*b)->indice);
    free(*b);
}