/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readread.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuokkan <kkuokkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:15:48 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 09:48:36 by kkuokkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

char	*double_size(char *data, int size)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char*)malloc(size * sizeof(char));
	while (i < (size / 2))
	{
		temp[i] = data[i];
		i++;
	}
	free(data);
	return (temp);
}

void	readread(char **argv, char **data, int a, int size)
{
	int		fd;
	int		b;
	char	c;

	b = 0;
	fd = open(argv[a], O_RDONLY);
	while (read(fd, &c, 1))
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
	close(fd);
}

char	**string(int argc, char **argv)
{
	int		a;
	int		size;
	int		b;
	char	**data;

	size = 10;
	data = malloc(argc * sizeof(char*));
	a = 1;
	while (a < argc)
	{
		data[a - 1] = (char*)malloc(size * sizeof(char));
		b = 0;
		readread(argv, data, a, size);
		a++;
	}
	data[a - 1] = NULL;
	return (data);
}
