#include "printf.h"

int	ft_putstr(char	*str)
{
		int	i;
		int	len;

		i = 0;
		len = 0;
		if (str[i] == '\0')
				return (-1);
		while (str[i] != '\0')
		{
				len += ft_putchar(str[i]);
				i++;
		}
		return (len);
}
