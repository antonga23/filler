/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strresize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 14:22:51 by antonga           #+#    #+#             */
/*   Updated: 2018/06/26 08:23:25 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strresize(char *oldstr, size_t newsize)
{
	char	*newstr;

	if (ft_strlen(oldstr) >= newsize)
		return (NULL);
	newstr = ft_strnew(newsize);
	if (!newstr)
		return (NULL);
	newstr = ft_strncpy(newstr, oldstr, ft_strlen(oldstr));
	free(oldstr);
	return (newstr);
}
