#include "libft.h"
int count_words(char const *s, char c)
{
    int i = 1;
    int count = 0;
    while(s[i])
    {
        if(s[i] == c && s[i - 1] != c)
            count++;
        i++;
    }
    if(s[i - 1] != c)
        count++;
    return count;
}
char    **ft_split(char const *s, char c)
{
    int i;
    int words_count;
    char **p;
    int count;
    int n = 0;

    i = 0;
    while(s[i] == c)
        i++;
    words_count = count_words(s,c);
    p = malloc((words_count + 1) * sizeof(char *));
    if(!p)
        return NULL;
    i = 0;
    count = 0;
    while(s[i])
    {
        while(s[i] == c)
            i++;
        while(s[i] != c)
        {
            i++;
            count++;
        }
        i -= count;
        p[n] = malloc((count + 1) * sizeof(char));
        if(!p[n])
            return NULL;
        ft_strlcpy(p[n],&s[i],count+1);
        n++;
        i += count;
        count = 0;
        i++;
    }
    p[n] = NULL;
    return p;
}
#include <stdio.h>
int main()
{
    char **p = ft_split("adam is my name",' ');
    int i = 0;
    while(i < 4)
        printf("%s\n",p[i++]);
}
