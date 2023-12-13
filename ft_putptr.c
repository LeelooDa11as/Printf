/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:09:40 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/06 18:09:43 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	len;

	if (write(1, "0x", 2) != 2)
		return (-1);
	len = ft_puthexa((unsigned long long int)ptr);
	if (len == -1)
		return (-1);
	return (len + 2);
}
/*
int	main(void)
{
		void	*ptr = "hola";
		int len;

		printf("%p\n", ptr);
		len = ft_putptr(ptr);
		printf("%d", len);
		return (1);
}*/
