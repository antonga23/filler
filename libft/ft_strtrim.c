/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 15:15:37 by antonga           #+#    #+#             */
/*   Updated: 2018/06/14 06:09:12 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*buffer;

	if (s)
	{
		i = 0;
		j = ft_strlen(s) - 1;
		while (ft_isspace(s[i]) && s[i] != '\0')
			i++;
		while (ft_isspace(s[j]) && j > 0)
			j--;
		j = j - i + 1;
		if (j <= 0)
			return (ft_strsub(s, 0, 0));
		buffer = ft_strsub(s, i, j);
		return (buffer);
	}
	return (NULL);
}
