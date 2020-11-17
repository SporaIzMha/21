
#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *vr;

    if (!del)
        return ;
    while(lst && *lst)
    {
        vr = (*lst)->next;
        ft_lstdelone(*lst, del);
        (*lst) = vr;
    }
}
