/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbonnev <ilbonnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:25:42 by ilbonnev          #+#    #+#             */
/*   Updated: 2024/11/13 17:19:30 by ilbonnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
    char b = 'B';
	char str[] = "sunset";
	ft_printf("%c & %c\n", b, str);
    return (0);
}