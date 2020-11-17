
#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int     i;

    if (!s1 || !set)
        return (NULL);
    while (ft_strchr(set, *s1) && *s1)
    {
        s1++;
    }
    i = ft_strlen(s1);
    while (i-- && ft_strchr(set, s1[i]))
        ;
    i++;
    return (ft_substr(s1, 0, i));
}
