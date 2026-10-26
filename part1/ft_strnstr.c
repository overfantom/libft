/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admobhid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:04:44 by admobhid          #+#    #+#             */
/*   Updated: 2026/10/21 13:49:32 by admobhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = i;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		n = 0;
		while (i < len && little[n] && little[n] == big[i])
		{
			if (little[n + 1] == '\0')
				return ((char *) & big[i - n]);
			n++;
			i++;
		}
		i -= n;
		i++;
	}
	return (NULL);
}
