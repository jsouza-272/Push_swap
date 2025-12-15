/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:44:14 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/03 17:47:35 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	left_to_right(const char *s1, const char *set)
{
	int	i;
	int	j;
	int	match;

	i = 0;
	while (s1[i])
	{
		j = 0;
		match = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				match = 1;
				break ;
			}
			j++;
		}
		if (match == 0)
			return (i);
		i++;
	}
	return (i);
}

static int	rigth_to_left(const char *s1, const char *set)
{
	int	i;
	int	j;
	int	match;

	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		j = 0;
		match = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				match = 1;
				break ;
			}
			j++;
		}
		if (match == 0)
			return (i + 1);
		i--;
	}
	return (i);
}

/// @brief
/// @param s1
/// @param set
/// @return
char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		f;
	char	*s;

	i = left_to_right(s1, set);
	f = rigth_to_left(s1, set);
	if ((f - i) < 0)
	{
		s = malloc(1);
		if (!s)
			return (NULL);
		s[0] = '\0';
		return (s);
	}
	s = malloc((f - i) * sizeof(char) + 1);
	if (!s)
		return (NULL);
	ft_strlcpy(s, &s1[i], (f - i + 1));
	return (s);
}
