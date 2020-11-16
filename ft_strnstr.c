
#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t little_l;

    little_l = ft_strlen(little);
    if (*little == '\0')
        return ((char *)big);
    while(*big && little_l <= len--)
    {
        if (ft_strncmp(big, little, little_l) == 0)
            return((char *)big);
        big++;
    }
    return (NULL);
}
