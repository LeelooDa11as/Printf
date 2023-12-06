#include "ft_printf.h"

int	ft_putunsign(unsigned int n)
{
		int		len;
		char	c;

		len = 0;

		if (n <= 9 )
		{
				c = n + '0'; 
				len += write(1, &c, 1);
		}
		else
		{
				len += ft_putunsign(n / 10);
				len += ft_putunsign(n % 10);
		}
		return (len);
}
