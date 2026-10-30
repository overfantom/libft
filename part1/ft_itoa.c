#include "libft.h"

char *ft_itoa(int n)
{
    long nbr = n;
    int i = 0;
    long holder;
    int count;
    char *p;
    int div = 1;
    int flag = 0;
    if(nbr < 0)
    {
        flag = 1;
        nbr *= -1;
    }
    holder = nbr;
    while(holder > 9)
    {
        holder /= 10;
        count++;
        div *= 10;
    }
    p = malloc((count+flag+1) * sizeof(char));
    if(!p)
        return NULL;
    if(flag == 1)
    {
        p[i]='-';
        i++;
    }
    while(i < count + flag)
    {
        p[i] = (nbr / div) + 48;
        nbr %= div; 
        div /= 10;
        i++;
    }
    p[i++]=(nbr / div) + 48;
    p[i]='\0';
    return p;

}
