#include "libft.h"
void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;
    if(lst == NULL)
        return;
    tmp =(*lst);
    while(tmp != NULL)
    {
        tmp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        (*lst)=tmp;
    }
}
