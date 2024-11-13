/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbonnev <ilbonnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:25:29 by ilbonnev          #+#    #+#             */
/*   Updated: 2024/11/13 15:22:18 by ilbonnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putptr_fd(unsigned long adress, int fd)
{
	int	size;

	size = 0;
	if (!adress)
		return (ft_putstr_fd("(nil)", fd));
	size += ft_putstr_fd("0x", fd);
	return (size + ft_puthex_fd(adress, "0123456789abcdef", fd));
}
