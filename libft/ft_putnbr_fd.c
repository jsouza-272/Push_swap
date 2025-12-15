/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:31:41 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/10 16:50:49 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd, int counter)
{
	long	nb;
	char	s;

	nb = n;
	if (nb < 0)
	{
		if (write(fd, "-", 1) == -1)
			return (-1);
		nb *= -1;
		counter++;
	}
	if (nb >= 10)
		counter = ft_putnbr_fd(nb / 10, fd, counter);
	nb = nb % 10;
	s = nb + '0';
	if (write(fd, &s, 1) == -1)
		return (-1);
	return (++counter);
}
