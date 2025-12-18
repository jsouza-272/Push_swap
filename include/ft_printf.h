/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:28:42 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/16 14:28:43 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putnbr_base(unsigned int nbr, char *base, int counter);
int	ft_put_adrr(void *nb, int counter);
int	ft_addr_check(void *nb, int counter);

#endif