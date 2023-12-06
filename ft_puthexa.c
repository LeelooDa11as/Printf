/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:33:36 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/06 18:05:49 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthexa(long long int n)
{
	int		len;
	char	*base;

	base = ft_strdup("0123456789abcdef");
	if (base == NULL)
		return (-1);
	len = 0;
	if (n < 16)
		len += write(1, &base[n], 1);
	else
	{
		len += ft_puthexa(n / 16);
		len += ft_puthexa(n % 16);
	}
	return (len);
}
