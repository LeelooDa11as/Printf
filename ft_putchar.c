#include "ft_printf.h"

int	ft_putchar(int c)
{
		if ((write(1, &c, 1)) == 1)
				return (1);
		else
				return (-1);
}
