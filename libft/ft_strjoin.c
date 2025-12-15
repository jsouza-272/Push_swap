/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:09:01 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/03 17:46:34 by jsouza           ###   ########.fr       */
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
/// @param s1
/// @param s2
/// @return
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s;
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	s = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!s)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[i2])
	{
		s[i + i2] = s2[i2];
		i2++;
	}
	s[i + i2] = 0;
	return (s);
}
