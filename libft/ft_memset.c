/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:46:48 by antonga           #+#    #+#             */
/*   Updated: 2018/06/13 15:27:54 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *buffer;

	buffer = (unsigned char *)b;
	while (len--)
	{
		*buffer = (unsigned char)c;
		buffer++;
	}
	return (b);
}
