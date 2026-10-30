#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *p = malloc(sizeof(t_list));
    if(!p)
        return NULL;
    p->content = content;
    p->next = NULL;
    return p;
}
