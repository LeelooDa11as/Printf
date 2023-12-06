/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:08:31 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/06 19:20:54 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		len;
	char	c;

	len = 0;
	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		return (write(1, &c, 1));
	}
	if (n == -2147483647)
		return (write(1, "-2147483647", 11));
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		++len;
	}
	len += ft_putnbr(n / 10);
	len += ft_putnbr(n % 10);
	return (len);
}

int	main(void)
{
	unsigned long int	n;

	n = 4294967295;
	printf(" %d", n);
	write(1, "\n", 1);
	printf(" %d", n);
}
