/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_uc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:07:21 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/06 18:07:25 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_uc(long long int n)
{
	int		len;
	char	*base;

	len = 0;
	base = ft_strdup("0123456789ABCDEF");
	if (base == NULL)
		return (-1);
	if (n < 16)
	{
		len += write(1, &base[n], 1);
		//error checker
	}
	else
	{
		len += ft_puthexa_uc(n / 16);
		len += ft_puthexa_uc(n % 16);
	}
	return (len);
}
/*
int main (void)
{
		long long int n = 0xE45;
		ft_puthexa_uc(n);
		write(1, "\n", 1);
		printf("%X", 0XE45);
		return (1);
}*/
