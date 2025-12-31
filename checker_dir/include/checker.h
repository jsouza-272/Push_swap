/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:44:49 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:11:24 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../../include/ft_fprintf.h"
# include "../../include/ft_printf.h"
# include "../../include/libft.h"
# include "../../include/push_swap.h"

void	test_exec(t_stack *a, t_stack *b);
void	cpb(t_stack *a, t_stack *b);
void	cpa(t_stack *b, t_stack *a);
void	crra(t_stack *a);
void	crrb(t_stack *b);
void	crrr(t_stack *a, t_stack *b);
void	crr(t_stack *a, t_stack *b);
void	crb(t_stack *b);
void	cra(t_stack *a);
void	css(t_stack *a, t_stack *b);
void	csb(t_stack *b);
void	csa(t_stack *a);

#endif