
#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *e;

    if (!(e = (t_list*)malloc(sizeof(*e))))
        return (NULL);
    e->content = content;
    e->next = NULL;
    return(e);
}
