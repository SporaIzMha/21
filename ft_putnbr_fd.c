
#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    unsigned int i;

    i = n;
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        i = -n;
    }
    if (i >= 10)
    {
        ft_putnbr_fd(i / 10, fd);
        ft_putnbr_fd(i % 10, fd)
    }
    else
        ft_putchar_fd(i + '0', fd);
}
