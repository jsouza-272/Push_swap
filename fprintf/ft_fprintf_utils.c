/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:14:31 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/31 11:14:15 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_fprintf.h"
#include "../include/libft.h"

int	ft_fputnbr_base(unsigned int nbr, char *base, int counter, int fd)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (nbr >= base_len)
		counter = ft_fputnbr_base(nbr / base_len, base, counter, fd);
	if (write(fd, &base[nbr % base_len], 1) == -1)
		return (-1);
	return (++counter);
}

int	ft_faddr_check(void *nb, int counter, int fd)
{
	int	n;

	if (!nb)
	{
		n = write(fd, "(nil)", 5);
		if (n == -1)
			return (-1);
		return (counter + n);
	}
	counter = ft_putstr_fd("0x", fd, counter);
	counter = ft_fput_adrr(nb, counter, fd);
	if (counter == -1)
	{
		return (-1);
	}
	return (counter);
}

int	ft_fput_adrr(void *nb, int counter, int fd)
{
	char	*base;

	base = "0123456789abcdef";
	if ((unsigned long long)nb >= 16)
		counter = ft_fput_adrr((void *)((unsigned long long)nb / 16), counter,
				fd);
	if (write(fd, &base[(unsigned long long)nb % 16], 1) == -1)
		return (-1);
	return (++counter);
}
