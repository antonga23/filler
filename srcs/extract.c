/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 16:05:43 by antonga           #+#    #+#             */
/*   Updated: 2018/08/19 21:51:33 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	get_player(t_map *map, char *line)
{
	map->player = 'x';
	map->enemy = 'o';
	if (strstr(line, "p1"))
	{
		map->player = 'o';
		map->enemy = 'x';
	}
}

char	**fillmap(int offset, int rows, char *line)
{
	int		i;
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * (rows + 1));
	i = 0;
	while (i < rows)
	{
		get_next_line(0, &line);
		arr[i++] = ft_strdup(line + offset);
	}
	arr[i] = 0;
	return (arr);
}

void	mapsize(int *y, int *x, int offset, char *line)
{
	*y = ft_atoi(line + offset);
	*x = ft_atoi(ft_strchr((line + offset), ' ') + 1);
}

void	extract(t_map *map)
{
	char *line;

	get_next_line(0, &line);
	if (map->first)
	{
		get_player(map, line);
		get_next_line(0, &line);
		mapsize(&map->map_size_y, &map->map_size_x, 8, line);
	}
	get_next_line(0, &line);
	map->map = fillmap(4, map->map_size_y, line);
	get_next_line(0, &line);
	mapsize(&map->token_size_y, &map->token_size_x, 6, line);
	map->token = fillmap(0, map->token_size_y, line);
	map->first = 0;
}
