
#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),
                   void (*del)(void *))
{
    t_list *new;
    t_list *new_l;

    new_l = NULL;
    if (!lst || !f || !del)
        return (new_l);
    while (lst)
    {
        if (!(new = ft_lstnew((*f)(lst->content))))
        {
            while (new_l)
            {
                new = new_l->next;
                (*del)(new_l->content);
                free(new_l);
                new_l = new;
            }
            lst = NULL;
            return (NULL);
        }
        ft_lstadd_back(&new_l, new);
        lst = lst->next;
    }
    return (new_l);
}
