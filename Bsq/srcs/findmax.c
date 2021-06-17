/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findmax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuokkan <kkuokkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:15:25 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 09:52:28 by kkuokkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

char	checkbox(char **map, int y, int x)
{
	char value;

	value = '0';
	if (map[y][x - 1] != '0')
		value = map[y][x - 1];
	else
		return ('1');
	if (map[y - 1][x - 1] != '0' && (value > map[y - 1][x - 1]))
		value = map[y - 1][x - 1];
	else if (map[y - 1][x - 1] == '0')
		return ('1');
	if (map[y - 1][x] != '0' && (value > map[y - 1][x]))
		value = map[y - 1][x];
	else if (map[y - 1][x] == '0')
		return ('1');
	return (value + 1);
}

void	fill_box(char **map, int x, int y, int max)
{
	int		tempy;
	int		tempx;
	char	*tempmarks;

	tempmarks = create_marks(map, 0);
	tempy = ((y + 1) - max);
	while (tempy <= y)
	{
		tempx = ((x + 1) - max);
		while (tempx <= x)
		{
			map[tempy][tempx] = tempmarks[2];
			tempx++;
		}
		tempy++;
	}
}

void	printmap(char **map, int countlines)
{
	int y;

	y = 1;
	while (y < countlines)
	{
		ft_putstr(map[y]);
		ft_putchar('\n');
		y++;
	}
}

void	fill_map(char **map, char *marks, char maxnum, int countlines)
{
	int		x;
	int		y;
	int		max;

	y = 1;
	max = maxnum - '0';
	while (y < countlines)
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == '0')
				map[y][x] = marks[1];
			else if (map[y][x] == maxnum)
			{
				fill_box(map, x, y, max);
				maxnum++;
			}
			else
				map[y][x] = marks[0];
			x++;
		}
		y++;
	}
	printmap(map, countlines);
}

char	findmax(char **map, int countlines)
{
	int		x;
	int		y;
	char	maxnum;

	y = 1;
	maxnum = '0';
	while (y < countlines)
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if ((y == 1 || x == 0) && map[y][x] != '0')
				map[y][x] = '1';
			else if (map[y][x] != '0')
				map[y][x] = checkbox(map, y, x);
			if (maxnum < map[y][x] && map[y][x] != '0')
				maxnum = map[y][x];
			x++;
		}
		y++;
	}
	if (maxnum == '0')
		return ('0');
	return (maxnum);
}
