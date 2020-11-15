
#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (size > 0)
    {
        size--;
        while(src[i] && size)
        {
            dst[i] = src[i];
            size--;
            i++;
        }
        dst[i] = '\0';
    }
    return (ft_strlen(src));
}
