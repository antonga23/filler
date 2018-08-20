/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/31 12:12:52 by antonga           #+#    #+#             */
/*   Updated: 2018/06/13 19:35:25 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	while (i < len)
	{
		if (*s1 != '\0')
			str[i] = *(s1++);
		else
			str[i] = *(s2++);
		i++;
	}
	str[i] = '\0';
	return (str);
}
