/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:10:00 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/03 17:45:19 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(long n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/// @brief
/// @param n
/// @return
char	*ft_itoa(int n)
{
	char	*str;
	size_t	l;
	long	nb;

	nb = n;
	l = int_len(nb);
	str = malloc(sizeof(char) * l + 1);
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	str[l] = '\0';
	while (nb > 0)
	{
		l--;
		str[l] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
