/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:07:00 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/03 17:47:40 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief
/// @param s
/// @param start
/// @param len
/// @return
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*sub;

	i = 0;
	l = len;
	if (start >= ft_strlen(s))
		l = 0;
	else if (len > (ft_strlen(s) - start))
		l = (ft_strlen(s) - start);
	sub = malloc((l + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < l)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
