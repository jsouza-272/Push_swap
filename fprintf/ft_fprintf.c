/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:16:44 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/17 11:32:10 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_fprintf.h"
#include "../include/libft.h"

int	fconversion(const char *s, va_list arg, int counter, int fd)
{
	if (s[0] == '%' && s[1] == 'c')
		counter = ft_putchar_fd(va_arg(arg, int), fd, counter);
	else if (s[0] == '%' && s[1] == 's')
		counter = ft_putstr_fd(va_arg(arg, char *), fd, counter);
	else if (s[0] == '%' && (s[1] == 'd' || s[1] == 'i'))
		counter = ft_putnbr_fd(va_arg(arg, int), fd, counter);
	else if (s[0] == '%' && s[1] == 'p')
		counter = ft_faddr_check(va_arg(arg, void *), counter, fd);
	else if (s[0] == '%' && s[1] == 'u')
		counter = ft_fputnbr_base(va_arg(arg, unsigned int), "0123456789",
				counter, fd);
	else if (s[0] == '%' && s[1] == 'x')
		counter = ft_fputnbr_base(va_arg(arg, unsigned int), "0123456789abcdef",
				counter, fd);
	else if (s[0] == '%' && s[1] == 'X')
		counter = ft_fputnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF",
				counter, fd);
	else if (s[0] == '%' && s[1] == '%')
		counter = ft_putchar_fd('%', fd, counter);
	else
		return (-1);
	return (counter);
}

int	ft_fprintf(int fd, const char *s, ...)
{
	va_list	args;
	size_t	i;
	int		counter;

	counter = 0;
	i = 0;
	if (!s)
		return (-1);
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			counter = fconversion(&s[i], args, counter, fd);
			i++;
		}
		else
			counter = ft_putchar_fd(s[i], fd, counter);
		if (counter <= -1)
			return (-1);
		i++;
	}
	va_end(args);
	return (counter);
}
