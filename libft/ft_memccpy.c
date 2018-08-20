/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 05:32:12 by antonga           #+#    #+#             */
/*   Updated: 2018/06/13 15:39:11 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*buffer_src;
	unsigned char	*buffer_dst;

	i = 0;
	buffer_src = (unsigned char *)src;
	buffer_dst = (unsigned char *)dst;
	while (i < n)
	{
		buffer_dst[i] = buffer_src[i];
		if (buffer_src[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
