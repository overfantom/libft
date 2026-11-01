/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admobhid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 02:27:21 by admobhid          #+#    #+#             */
/*   Updated: 2026/10/15 02:27:25 by admobhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s, len + 1);
	return (p);
}
