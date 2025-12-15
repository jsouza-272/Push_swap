/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:58:52 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/03 18:10:16 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

static void	ft_bzero(void *s, size_t n)
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

/// @brief  The calloc() function allocates memory for an array of
/// nmemb elements of size bytes each and returns a
/// pointer to the allocated memory.  The memory is set to zero.
/// If nmemb or size is 0, then calloc() re‐
/// turns  either NULL, or a unique pointer value that can later be
/// successfully passed to free().  If the
/// multiplication of nmemb and size would result in integer overflow,
/// then calloc() returns an error.  By
/// contrast, an integer overflow would not be detected in the following
/// call to malloc(), with the result
/// that an incorrectly sized block of memory would be allocated:
/// @param nmemb
/// @param size
/// @return The  malloc()  and  calloc()  functions
/// return  a  pointer to the allocated memory, which is suitably
/// aligned for any built-in type.  On error, these functions
/// return NULL.  NULL may also be returned by a
/// successful  call  to  malloc()  with a size of zero, or by
/// a successful call to calloc() with nmemb or
/// size equal to zero.
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (malloc(0));
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero(s, nmemb * size);
	return (s);
}
