/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:28:37 by jsouza            #+#    #+#             */
/*   Updated: 2025/12/17 11:29:54 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FPRINTF_H
# define FT_FPRINTF_H

# include <stdarg.h>

int	ft_fprintf(int fd, const char *s, ...);
int	ft_fputnbr_base(unsigned int nbr, char *base, int counter, int fd);
int	ft_fput_adrr(void *nb, int counter, int fd);
int	ft_faddr_check(void *nb, int counter, int fd);

#endif