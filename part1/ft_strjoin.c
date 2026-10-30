#include "../part1/libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char *p;
	int s1len;
	int s2len;

	if(s == NULL)
		return NULL;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	p = malloc((s1len+s2len+1) * sizeof(char));
	if(!p)
		return NULL;
	p[0]='\0';
	ft_strlcat(p,s1,(size_t)(s1len + 1));
	ft_strlcat(p,s2,(size_t)(s1len + s2len + 1));
	return (p);
}
