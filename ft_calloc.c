
#include "libft.h"

void    *ft_calloc(size_t num, size_t size)
{
    void *x;

    x = (void *)malloc(num * size);
    if (!x)
        return (NULL);
    ft_bzero(x, num);
    return (x);
}
