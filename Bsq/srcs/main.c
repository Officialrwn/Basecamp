/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuokkan <kkuokkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 09:48:26 by kkuokkan          #+#    #+#             */
/*   Updated: 2021/06/16 14:03:02 by kkuokkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	complete_map(char **str, int y)
{
	char	**map;
	char	*marks;
	char	maxnum;
	int		countlines;

	countlines = count_lines(str[y]);
	if (countlines == 0 || countlines == 1)
		write(2, "map error\n", 11);
	else
	{
		map = str_array(str[y], countlines);
		marks = create_marks(str, y);
		if ((mod_map(map, marks, countlines)) || line_size_cmp(map, countlines))
			write(2, "map error\n", 11);
		else
		{
			maxnum = findmax(map, countlines);
			if (maxnum == '0')
				write(2, "map error\n", 11);
			else
				fill_map(map, marks, maxnum, countlines);
		}
	}
}

void	stdin_readread(char **data, int a, int size)
{
	int		b;
	char	c;

	b = 0;
	while (read(0, &c, 1))
	{
		data[a - 1][b] = c;
		b++;
		if (b == size)
		{
			size *= 2;
			data[a - 1] = double_size(data[a - 1], size);
		}
	}
	data[a - 1][b] = '\0';
}

char	**stdin_string(void)
{
	int		a;
	int		size;
	int		b;
	char	**data;

	size = 10;
	data = malloc(1 * sizeof(char*));
	a = 1;
	data[a - 1] = (char*)malloc(size * sizeof(char));
	b = 0;
	stdin_readread(data, a, size);
	a++;
	data[a - 1] = NULL;
	return (data);
}

int		main(int argc, char **argv)
{
	char	**str;
	int		x;
	int		y;

	x = 2;
	y = 0;
	if (argc > 1)
	{
		while (argc >= x++)
		{
			str = string(argc, argv);
			complete_map(str, y);
			free(str);
			y++;
		}
	}
	else
	{
		str = stdin_string();
		complete_map(str, 0);
	}
	return (0);
}
