/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:27:48 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/03 17:46:09 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/// @brief
/// @param s
/// @param c
/// @param n
/// @return
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
