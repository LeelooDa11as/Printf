/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:10:48 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/06 18:16:06 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	len;
	char	*str_dup;

	i = 0;
	len = ft_strlen(str);
	str_dup = malloc(sizeof(char) * (len + 1));
	if (!str_dup)
		return (NULL);
	while (i < len)
	{
		str_dup[i] = str[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
/*
int	main(void)
{
		printf("%s", ft_strdup("are tou Sure? lolol5"));
		return (1);
}*/
