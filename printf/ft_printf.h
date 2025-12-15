/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:15:34 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/10 13:36:48 by jsouza           ###   ########.fr       */
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