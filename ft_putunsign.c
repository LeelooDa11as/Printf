/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:17:20 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/13 18:34:01 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsign(unsigned int n)
{
	int		len;
	int		aux;

	len = 0;
	if (n <= 9)
	{
		if (ft_putchar(n + '0') != 1)
			return (-1);
		return (++len);
	}
	aux = ft_putunsign(n / 10);
	if (aux == -1)
		return (-1);
	len += aux;
	aux = ft_putunsign(n % 10);
	if (aux == -1)
		return (-1);
	return (len + aux);
}
/*
int	main(void)
{
	printf("%u %d", 10, -10);
	printf("\n%d",ft_putunsign(-10));
	return (1);
}*/
