#include "libft.h"
    
char    *ft_strtrim(char const *s1, char const *set)
{
    int i = 0;
    int n = 0;
    int len;

    if(s1 == NULL || set == NULL)
        return NULL;
    len =ft_strlen(s1);
    while(s1[i] && set[n])
    {
        if(set[n] == s1[i])
        {
            i++;
            n = 0;
        }
        else
            n++;
    }
    n = 0;
    //len--;
    while(len > 0 && set[n])
    {
        if(set[n] == s1[len-1])
        {
            len--;
            n = 0;
        }
        else
            n++;
    }
    return ft_substr(s1,i,len-i);
}
