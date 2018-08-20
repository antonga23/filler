/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:42:01 by antonga           #+#    #+#             */
/*   Updated: 2018/06/13 19:18:44 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long int	n2;

	n2 = (long int)n;
	len = ft_llintlen(n2);
	if (n2 < 0)
		len++;
	if (!(str = ft_strnew(len)))
		return (NULL);
	if (n2 < 0)
	{
		*str = '-';
		n2 *= -1;
	}
	len--;
	str[len] = n2 % 10 + '0';
	while (n2 /= 10)
		str[--len] = n2 % 10 + '0';
	return (str);
}
