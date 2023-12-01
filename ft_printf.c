
#include "printf.h"

int	ft_printf(const char *str, ...)
{
		int	len;
		int	i;
		int total;
		va_list args;

		i = 0;
		total = 0;
		va_start(args, str);
		while (str[i] != '\0') //&& len != -1 )
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
		printf("\nNum de caracteres es %d\n", len);
		va_end(args);
		return (len);
}

int	main(void)
{
		void	*ptr = "Hey";

		ft_printf("%s %x %c %p %X", "Hola", 0x12b, 'B', ptr, 0x123d);
		printf("%s %x %c %p %u", "Hola", 0x12b, 'B', ptr, -2);
		return (1);
}
