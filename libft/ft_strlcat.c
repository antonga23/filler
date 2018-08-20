/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 19:40:19 by antonga           #+#    #+#             */
/*   Updated: 2018/06/13 13:38:13 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	pos;
	size_t	d;
	size_t	s;

	pos = ft_strlen(dst);
	d = pos;
	s = ft_strlen(src);
	while (pos + 1 < dstsize && *src != '\0')
	{
		*(dst + pos++) = *(src++);
	}
	dst[pos] = '\0';
	if (d < dstsize)
		return (s + d);
	else
		return (s + dstsize);
}
