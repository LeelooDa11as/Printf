#include "printf.h"

int	ft_puthexa(long long int n)
{
		int		len;
		char	*base;

		base = ft_strdup("0123456789abcdef");
		if (base == NULL)
				return ( -1);
		len = 0;
		if (n  < 16)
				len += write(1, &base[n], 1);
		else
		{
			len += ft_puthexa(n / 16);
			len += ft_puthexa(n % 16);
		}
		return (len);
}

/*
int	main(void)
{
		int	x;

		x = 0xFA;
		printf("%d\n", ft_puthexa(x));
		return (1);
}
*/
