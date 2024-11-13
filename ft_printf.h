/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbonnev <ilbonnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:12:13 by ilbonnev          #+#    #+#             */
/*   Updated: 2024/11/13 17:25:25 by ilbonnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_countdigits(int nbr);
int		ft_puthex_fd(unsigned long n, char *base, int fd);
int		ft_putptr_fd(unsigned long adress, int fd);
int		ft_putunbr_fd(unsigned int n, int fd);

int		ft_printf(const char *format, ...);

#endif
