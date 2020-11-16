
#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int r;
    int znak;

    i = 0;
    r = 0;
    znak = 1;
    if (!str)
        return (0);
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
           str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
        i++;
    if (str[i] == '-')
        znak = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = (r * 10) + (str[i] - '0');
        i++;
    }
    return (r * znak);
}
