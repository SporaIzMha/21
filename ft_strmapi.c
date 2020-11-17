
#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *str;

    i = 0;
    if (!s || !f)
        return (NULL);
    if (!(str = ft_strdup(s)))
        return (NULL);
    while (str[i])
    {
        str[i] = (*f)(i, str[i]);
        i++;
    }
    return (str);
}
