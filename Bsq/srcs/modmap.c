/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:21:48 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 13:39:45 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int		mod_map(char **map, char *marks, int countlines)
{
	int		y;
	int		x;

	y = 1;
	while (y < countlines)
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] != marks[0] && map[y][x] != marks[1])
				return (1);
			if (map[y][x] == marks[1])
				map[y][x] = '0';
			else
				map[y][x] = '.';
			x++;
		}
		y++;
	}
	return (0);
}
