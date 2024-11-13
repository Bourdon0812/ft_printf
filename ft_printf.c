/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbonnev <ilbonnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:50:23 by ilbonnev          #+#    #+#             */
/*   Updated: 2024/11/13 16:58:42 by ilbonnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_showarg(va_list args, char type)
{
	int		size;
	char	*hexmin;
	char	*hexmax;

	hexmin = "0123456789abcdef";
	hexmax = "0123456789ABCDEF";
	size = 0;
	if (type == 'c')
		size = (ft_putchar_fd(va_arg(args, int), 1));
	else if (type == 's')
		size = (ft_putstr_fd(va_arg(args, char *), 1));
	else if (type == 'p')
		size = (ft_putptr_fd(va_arg(args, unsigned long), 1));
	else if (type == 'd' || type == 'i')
		size = (ft_putnbr_fd(va_arg(args, int), 1));
	else if (type == 'u')
		size = (ft_putunbr_fd(va_arg(args, unsigned int), 1));
	else if (type == 'x')
		size = (ft_puthex_fd(va_arg(args, unsigned int), hexmin, 1));
	else if (type == 'X')
		size = (ft_puthex_fd(va_arg(args, unsigned int), hexmax, 1));
	else if (type == '%')
		size = (ft_putchar_fd('%', 1));
	return (size);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		size;

	i = 0;
	size = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			++i;
			size += ft_showarg(args, format[i]);
		}
		else
			size += ft_putchar_fd(format[i], 1);
		++i;
	}
	va_end(args);
	return (size);
}
