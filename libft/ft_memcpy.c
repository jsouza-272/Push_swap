/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:07:14 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/03 17:46:02 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/// @brief
/// @param dest
/// @param src
/// @param n
/// @return
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	unsigned char		*p2;

	p1 = src;
	p2 = dest;
	if (!p1 && !p2)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p2[i] = p1[i];
		i++;
	}
	return (dest);
}
