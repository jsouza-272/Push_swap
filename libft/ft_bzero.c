/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:18:08 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/03 18:07:50 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/// @brief  The  bzero() function erases the data in the n bytes of the memory
/// starting at the location pointed toby s, by writing zeros
///(bytes containing '\0') to that area.
/// @param s
/// @param n
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
