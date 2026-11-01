/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admobhid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:12:17 by admobhid          #+#    #+#             */
/*   Updated: 2026/10/13 16:52:49 by admobhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	len;

	i = 0;
	n = 0;
	while (i < size && dst[i] != '\0')
	{
		i++;
	}
	if (i == size)
		return (size + ft_strlen(src));
	len = i + ft_strlen(src);
	while (src[n] != '\0' && i < size - 1)
	{
		dst[i] = src[n];
		n++;
		i++;
	}
	dst[i] = '\0';
	return (len);
}
