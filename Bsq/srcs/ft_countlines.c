/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countlines.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuokkan <kkuokkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:19:51 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 14:00:21 by kkuokkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int	line_size(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count + 1);
}

int	line_size2(char *str)
{
	int	i;
	int	count;

	i = line_size(str);
	count = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count + 1);
}

int	count_lines(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	if (str[i - 1] != '\n')
		return (0);
	return (count);
}

int	line_size_cmp(char **map, int countlines)
{
	int		y;
	int		cmp;

	y = 1;
	cmp = line_size(map[y]);
	while (y < countlines)
	{
		if (cmp != line_size(map[y++]))
			return (1);
	}
	return (0);
}
