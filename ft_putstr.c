/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:14:37 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/13 20:10:21 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (ft_putchar(str[i]) != 1)
			return (-1);
		i++;
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	int	len;
	int	lenp;

	lenp = printf("%s","" );
	len = ft_putstr("");
	printf("/n len es %d y lenp es de %d", len, lenp);
	return (1);
}*/
