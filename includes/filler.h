/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 13:40:50 by antonga           #+#    #+#             */
/*   Updated: 2018/08/19 21:42:02 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/libft.h"
# include "../libft/get_next_line.h"

typedef struct	s_map
{
	char		**map;
	int			map_size_x;
	int			map_size_y;
	char		**token;
	int			token_size_x;
	int			token_size_y;
	char		player;
	char		enemy;
	int			hot_y;
	int			hot_x;
	int			hottest;
	int			first;
	int			fail;
}				t_map;

void			extract(t_map *map);
void			find_heat(t_map *map);

#endif
