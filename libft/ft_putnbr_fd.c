/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbonnev <ilbonnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:26:05 by ilbonnev          #+#    #+#             */
/*   Updated: 2024/11/13 15:09:39 by ilbonnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	size;

	size = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return (11);
	}
	if (n < 0)
	{
		size += ft_putchar_fd('-', fd);
		size += ft_putnbr_fd(-n, fd);
		return (size);
	}
	if (n > 9)
		size += ft_putnbr_fd(n / 10, fd);
	size += ft_putchar_fd(n % 10 + '0', fd);
	return (size);
}
