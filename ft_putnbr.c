#include "ft_printf.h"

int	ft_putnbr(int n)
{
		int		len;
		char	c;

		len = 0;

		if (n >= 0 && n <= 9)
		{
			c = n + '0';
			return (write(1, &c, 1));
		}
		if (n == -2147483648)
			return (write(1, "-2147483648", 11));
		else if (n < 0)
		{
			write(1, "-", 1);
			n *= -1;
			++len;
		}
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
		return (len);
}
