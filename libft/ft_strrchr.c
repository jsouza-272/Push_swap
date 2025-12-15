/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:59:46 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/03 17:47:16 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

static size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

/// @brief
/// @param s
/// @param c
/// @return
char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	cc;

	i = ft_strlen(s);
	cc = c;
	if (s[i] == cc)
		return ((char *)&s[i]);
	while (i > 0)
	{
		i--;
		if (s[i] == cc)
			return ((char *)&s[i]);
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
