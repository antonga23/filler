/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:56:38 by antonga           #+#    #+#             */
/*   Updated: 2018/06/14 19:01:16 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						sign;
	int						scount;
	unsigned long long int	num;

	sign = 1;
	scount = 0;
	num = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (++scount > 1)
			return (0);
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		num = num * 10 + *(str++) - '0';
	if (ft_llintlen(num) >= 19)
		return (sign == -1 ? 0 : -1);
	if (num > 9223372036854775807)
		return (sign == -1 ? 0 : -1);
	else
		return (num * sign);
}
