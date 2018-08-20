/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 17:41:49 by antonga           #+#    #+#             */
/*   Updated: 2018/06/13 19:39:00 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *buffer;

	buffer = (char *)malloc(size + 1);
	if (buffer == NULL)
		return (NULL);
	ft_memset(buffer, '\0', size + 1);
	return (buffer);
}
