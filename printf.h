#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_format_specifier(va_list *args, char format);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putunsign(unsigned int n);
int		ft_puthexa(long long int n);
int		ft_puthexa_uc(long long int n);
int		ft_putptr(void *ptr);
char    *ft_strdup(const char *str1);
#endif
