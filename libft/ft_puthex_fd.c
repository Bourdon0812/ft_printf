/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbonnev <ilbonnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:58:01 by ilbonnev          #+#    #+#             */
/*   Updated: 2024/11/13 15:20:34 by ilbonnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthex_fd(unsigned long n, char *base, int fd)
{
	int	size;

	size = 0;
	if (n >= 16)
		size += ft_puthex_fd(n / 16, base, fd);
	size += ft_putchar_fd(base[n % 16], fd);
	return (size);
}
