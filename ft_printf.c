#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
		int	len;
		int	i;
		int total;
		va_list args;

		i = 0;
		total = 0;
		va_start(args, str);
		while (str[i] != '\0')
		{
				if (str[i] != '%')
				{
					ft_putchar(str[i]);
					total++;
				}
				if (str[i] == '%' && str[i + 1] != '\0')
					 total += ft_format_specifier(&args, str[++i]); 			
				i++;
		}
		len = total;
		va_end(args);
		return (len);
}
