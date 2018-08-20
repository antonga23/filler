/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:27:32 by antonga           #+#    #+#             */
/*   Updated: 2018/06/13 13:28:39 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dst;

	dst = (char *)(malloc)(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dst)
		return (NULL);
	return (ft_strcpy(dst, s1));
}
