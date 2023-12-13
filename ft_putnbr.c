/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:08:31 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/13 18:03:09 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_min_int(void)
{
	if (write(1, "-2147483648", 11) != 11)
		return (-1);
	return (11);
}

int	ft_pos_recur(int n)
{
	int	len;
	int	aux;

	len = 0;
	if (n <= 9)
	{
		if (ft_putchar(n + '0') != 1)
			return (-1);
		return (++len);
	}
	aux = ft_pos_recur(n / 10);
	if (aux == -1)
		return (-1);
	len += aux;
	if (ft_pos_recur(n % 10) != 1)
		return (-1);
	return (++len);
}

int	ft_putnbr(int n)
{
	int	len;
	int	aux;

	len = 0;
	if (n == -2147483648)
		return (ft_min_int());
	if (n < 0)
	{
		if (write(1, "-", 1) != 1)
			return (-1);
		n *= -1;
		len++;
	}
	aux = ft_pos_recur(n);
	if (aux != -1)
		return (len + aux);
	return (-1);
}
/*
int	main(void)
{
	int	len;

	len = ft_putnbr(10);
	printf("\n%d", len);
	return (1);
}*/
