
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t num)
{
    size_t i;

    if (src > dst)
        i = 0;
        while (i < num)
        {
            ((char *)dst)[i] = ((char *)src)[i];
            i++;
        }
    else
    {
        i = num;
        while (i > 0)
        {
            i--;
            ((char *)dst)[i] = ((char *)src)[i];
        }
    }
    return (dst);
}
