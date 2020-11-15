
#include "libft.h"

void    *ft_memccpy(void *str, const void *src, int c, size_t num)
{
    size_t i;

    i = 0;
    while (i < num)
    {
        *(unsigned char*)(str + i) = *(unsigned char*)(src + i);
        if (*(unsigned char*)(src + i) == (unsigned char)c)
            return (str + 1 + i);
        i++;
    }
    return (NULL);
}
