#include "../part1/libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t count;
	char *p;
	if(s == NULL)
		return NULL;
   	i = start;
	count = 0;
	if(((size_t)start) >= ft_strlen(s))
	{
		p = malloc(1);
		if(p == NULL)
			return NULL;
		p[0] = '\0';
		return p;
	}
	while(count < len && s[i])
	{
		i++;
		count++;
	}
	p = malloc((count + 1) * sizeof(char));
	if(p == NULL)
		return NULL;
	ft_memcpy(p, &s[start], count);
	p[count]='\0';
	return p;
}
