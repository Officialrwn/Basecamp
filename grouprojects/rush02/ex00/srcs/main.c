/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 09:38:15 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/06/13 13:11:59 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

char	*read_input(void)
{
	char	*buffer;
	char	*temp;
	long	buf_size;
	long	index;

	index = 0;
	buf_size = 4096;
	buffer = malloc(sizeof(char) * (buf_size + 1));
	while (read(0, &(buffer[index]), 1))
	{
		index++;
		if (index == buf_size)
		{
			temp = malloc(sizeof(char) * (buf_size + 1));
			ft_strcpy(temp, buffer);
			free(buffer);
			buf_size = buf_size * 2;
			buffer = malloc(sizeof(char) * (buf_size + 1));
			ft_strcpy(buffer, temp);
			free(temp);
		}
	}
	buffer[index] = '\0';
	return (buffer);
}

void	check_match(char *input, int x, int y)
{
	int i;

	i = 0;
	if (input[0] == '\0')
	{
		ft_putstr("Any\n");
		return ;
	}
	if (check_rush_00(input, x, y, i))
		i = 1;
	if (check_rush_01(input, x, y, i))
		i = 1;
	if (check_rush_02(input, x, y, i))
		i = 1;
	if (check_rush_03(input, x, y, i))
		i = 1;
	if (check_rush_04(input, x, y, i))
		i = 1;
	if (i == 0)
		ft_putstr("No matches");
	ft_putchar('\n');
}

int		main(void)
{
	int		x;
	int		y;
	char	*buffer;

	buffer = read_input();
	x = count_chars(buffer);
	y = count_lines(buffer);
	check_match(buffer, x, y);
	free(buffer);
	return (0);
}
