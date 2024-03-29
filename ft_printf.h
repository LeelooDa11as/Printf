/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:53:18 by kkoval            #+#    #+#             */
/*   Updated: 2023/12/13 19:59:41 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_format_specifier(va_list *args, char format);
int		ft_putchar(int c);
int		ft_putstr(const char *str);
int		ft_putnbr(int n);
int		ft_putunsign(unsigned int n);
int		ft_puthexa(unsigned long long int n);
int		ft_puthexa_uc(unsigned long long int n);
int		ft_putptr(void *ptr);
char	*ft_strdup(const char *str1);
#endif
