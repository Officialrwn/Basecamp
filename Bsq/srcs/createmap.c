/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuokkan <kkuokkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:20:47 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 09:52:48 by kkuokkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

char	**str_array(char *str, int countlines)
{
	int		i;
	int		x;
	int		y;
	char	**map;

	map = malloc((countlines + 1) * sizeof(char*));
	i = 0;
	x = 0;
	while (x < (countlines))
	{
		y = 0;
		map[x] = malloc((line_size2(str)) * sizeof(char));
		while (str[i] != '\n' && str[i] != '\0')
		{
			map[x][y] = str[i];
			y++;
			i++;
		}
		map[x][y] = '\0';
		x++;
		i++;
	}
	return (map);
}
