#include "libft.h"

int	ft_numlen(long nbr)
{
	long	tmp;
	int		len;

	tmp = nbr;
	len = 1;
	while (tmp > 9)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

void	ft_fill(char *str, long nbr, int len)
{
	long	div;
	int		i;

	div = 1;
	i = 1;
	while (i < len)
	{
		div *= 10;
		i++;
	}
	i = 0;
	while (div > 0)
	{
		str[i++] = (nbr / div) + '0';
		nbr %= div;
		div /= 10;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	int		sign;
	char	*str;

	nbr = n;
	sign = 0;
	if (nbr < 0)
	{
		sign = 1;
		nbr *= -1;
	}
	len = ft_numlen(nbr);
	str = malloc(len + sign + 1);
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	ft_fill(str + sign, nbr, len);
	return (str);
}
