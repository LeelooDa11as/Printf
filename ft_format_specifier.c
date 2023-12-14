/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:16:21 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/13 19:58:52 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_specifier(va_list *args, char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(*args, const char *)));
	if (format == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (format == 'u')
		return (ft_putunsign(va_arg(*args, unsigned int)));
	else if (format == 'x')
		return (ft_puthexa(va_arg(*args, unsigned int)));
	else if (format == '%')
		return (ft_putchar('%'));
	else if (format == 'X')
		return (ft_puthexa_uc(va_arg(*args, unsigned int)));
	else
		return (-1);
}
