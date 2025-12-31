/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:32:10 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:17:13 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

long	ft_atol(const char *nptr)
{
	int		i;
	long	result;
	int		minus;

	i = 0;
	result = 0;
	minus = 1;
	while (whitespace(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		minus = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + nptr[i] - '0';
		i++;
	}
	result *= minus;
	return (result);
}
