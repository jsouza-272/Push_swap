/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:26:47 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/11 14:25:58 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd, int counter)
{
	size_t	i;
	int		n;

	i = 0;
	if (!s)
	{
		n = write(1, "(null)", 6);
		if (n == -1)
			return (-1);
		return (counter + n);
	}
	while (s[i])
	{
		if (write(fd, &s[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i + counter);
}
