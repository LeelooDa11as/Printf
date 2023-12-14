/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_uc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:07:21 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/13 20:34:17 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_uc(unsigned long long int n)

{
	int		len;
	char	*base;
	int		aux;

	len = 0;
	base = "0123456789ABCDEF";
	if (base == NULL)
		return (-1);
	if (n < 16)
	{
		if (write(1, &base[n], 1) != 1)
			return (-1);
		return (++len);
	}
	aux = ft_puthexa_uc(n / 16);
	if (aux == -1)
		return (-1);
	len += aux;
	aux = ft_puthexa_uc(n % 16);
	if (aux == -1)
		return (-1);
	return (len + aux);
}
/*
int main (void)
{
		long long int n = 0xFFFFFFFF;
		ft_puthexa_uc(n);
		write(1, "\n", 1);
		printf("%X", 0XE45);
		return (1);
}*/
