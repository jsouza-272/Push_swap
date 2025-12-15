/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:14:31 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/15 17:04:03 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_putnbr_base(unsigned int nbr, char *base, int counter)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (nbr >= base_len)
		counter = ft_putnbr_base(nbr / base_len, base, counter);
	if (write(1, &base[nbr % base_len], 1) == -1)
		return (-1);
	return (++counter);
}

int	ft_addr_check(void *nb, int counter)
{
	int	n;

	if (!nb)
	{
		n = write(1, "(nil)", 5);
		if (n == -1)
			return (-1);
		return (counter + n);
	}
	counter = ft_putstr_fd("0x", 1, counter);
	counter = ft_put_adrr(nb, counter);
	if (counter == -1)
	{
		return (-1);
	}
	return (counter);
}

int	ft_put_adrr(void *nb, int counter)
{
	char	*base;

	base = "0123456789abcdef";
	if ((unsigned long long)nb >= 16)
		counter = ft_put_adrr((void *)((unsigned long long)nb / 16), counter);
	if (write(1, &base[(unsigned long long)nb % 16], 1) == -1)
		return (-1);
	return (++counter);
}
