#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char ))
{
    int i;
    if(s == NULL || f == NULL)
        return NULL;
    i = 0;
    char *p= malloc((ft_strlen(s) + 1) * sizeof(char));
    if(!p)
        return NULL;
    while(s[i])
    {
        p[i]=f(i,s[i]);
        i++;
    }
    p[i]='\0';
    return p;
}

