#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	p = malloc(s1len + s2len + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, s1len);
	ft_memcpy(p + s1len, s2, s2len);
	p[s1len + s2len] = '\0';
	return (p);
}
