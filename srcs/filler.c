/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 14:12:00 by antonga           #+#    #+#             */
/*   Updated: 2018/08/19 21:52:00 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		main(void)
{
	t_map *map;

	map = (t_map *)malloc(sizeof(t_map));
	map->first = 1;
	map->fail = 1;
	while (map->fail)
	{
		extract(map);
		find_heat(map);
		if (map->hottest == 0)
			map->fail = 0;
		ft_putnbr(map->hot_y);
		ft_putchar(' ');
		ft_putnbr(map->hot_x);
		ft_putchar('\n');
		free(map->token);
		free(map->map);
	}
	free(map);
	return (0);
}
