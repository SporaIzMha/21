
#include "libft.h"

char    *ft_strncmp(const char *str1, const char *str2, size_t num)
{
    size_t i;

    i = 0;
    while ((*str1 == *str2) && *str1 && (i < num))
    {
        str1++;
        str2++;
        i++;
    }
    return ((unsigned char)*str1 - (unsigned char)*str2);
}
