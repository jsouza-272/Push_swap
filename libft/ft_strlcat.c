/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:08:20 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/07 15:43:57 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dlen >= size)
		return (slen + size);
	i = 0;
	while (i < size - dlen - 1 && src[i])
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (size > (slen + dlen))
	{
		dst[dlen + i] = '\0';
		return (dlen + slen);
	}
	dst[size - 1] = '\0';
	return (dlen + slen);
}
