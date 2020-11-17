
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (s == NULL)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    while (s[j])
    {
        if (j < len && j >= start)
        {
            str[i] = s[j];
            i++;
        }
        j++;
    }
    str[i] = '\0';
    return (str);
}
