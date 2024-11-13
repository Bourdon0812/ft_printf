/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbonnev <ilbonnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:39:19 by ilbonnev          #+#    #+#             */
/*   Updated: 2024/11/13 16:36:44 by ilbonnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putunbr_fd(unsigned int n, int fd)
{
	int	size;

	size = 0;
	if (n == 0)
	{
		size += ft_putchar_fd('0', fd);
		return (size);
	}
	if (n > 9)
		size += ft_putunbr_fd(n / 10, fd);
	size += ft_putchar_fd(n % 10 + '0', fd);
	return (size);
}
