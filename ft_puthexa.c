/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:33:36 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/13 20:13:30 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthexa(unsigned long long int n)
{
	int		len;
	char	*base;
	int		aux;

	len = 0;
	base = "0123456789abcdef";
	if (base == NULL)
		return (-1);
	if (n < 16)
	{
		if (write(1, &base[n], 1) != 1)
			return (-1);
		return (++len);
	}
	aux = ft_puthexa(n / 16);
	if (aux == -1)
		return (-1);
	len += aux;
	aux = ft_puthexa(n % 16);
	if (aux == -1)
		return (-1);
	return (len + aux);
}
/*	else
	{
		len += ft_puthexa(n / 16);
		len += ft_puthexa(n % 16);
	}
	return (len);
}*/
/*
int	main(void)
{
	int len;

	len = ft_puthexa(-1);
	printf("%x", -1);
	printf("%d", len);
	return (1);
}*/
