#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

void	free_words(char **p, int n)
{
	while (n > 0)
		free(p[--n]);
	free(p);
}

char	**allocate_words(char const *s, char c)
{
	char	**p;

	p = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	return (p);
}

int	fill_words(char **p, char const *s, char c)
{
	int	i;
	int	start;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			p[n] = ft_substr(s, start, i - start);
			if (!p[n])
				return (free_words(p, n), 0);
			n++;
		}
	}
	p[n] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	if (!s)
		return (NULL);
	p = allocate_words(s, c);
	if (!p)
		return (NULL);
	if (!fill_words(p, s, c))
		return (NULL);
	return (p);
}
