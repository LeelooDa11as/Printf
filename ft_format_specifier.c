#include "printf.h"

int	ft_format_specifier(va_list *args, char format)
{

		if (format == 'c')
				return (ft_putchar(va_arg(*args, int)));
		if (format == 's')
				return (ft_putstr(va_arg(*args, char *)));
		if (format == 'p')
				return (ft_putptr(va_arg(*args, void *)));
		else if (format == 'd')
				return (ft_putnbr(va_arg(*args, int)));
		else if (format == 'u')
				return (ft_putunsign(va_arg(*args, unsigned int)));
		else if (format == 'x')
				return (ft_puthexa(va_arg(*args, long long int)));
		else if (format == '%')
				return(ft_putchar('%'));
		else if (format == 'X')
				return(ft_puthexa_uc(va_arg(*args, long long int)));
		else 
				return (-1);
}
