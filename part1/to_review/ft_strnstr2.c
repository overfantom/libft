#include <stddef.h>
#include <stdio.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	if(little[i] =='\0')
		return ((char *)&big[0]);
	while(i < len && big[i])
	{
		n = 0;
		while(i + n < len && big[i+n] && big[i+n]==little[n])
		{
			n++;
		}
			if(little[n]=='\0')
				return ((char *)&big[i]);
		i++;
	}
	return	NULL;
}
