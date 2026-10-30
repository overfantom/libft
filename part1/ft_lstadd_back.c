#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;
    tmp =   *lst;
    *lst = ft_lstlast(*lst);
    if(*lst == NULL)
        *lst = new;
    else
    {
        (*lst)->next = new;
        *lst = tmp;
    }
}
