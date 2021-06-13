/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 09:38:15 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/06/13 06:06:38 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

char	*read_input(void)
{
	char	*buffer;
	char	*temp;
	int		buf_size;
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
	if (check_rush_00(input, x, y))
		i = 1;
	if (check_rush_01(input, x, y))
		i = 1;
	if (check_rush_02(input, x, y))
		i = 1;
	if (check_rush_03(input, x, y))
		i = 1;
	if (check_rush_04(input, x, y))
		i = 1;
	if (i == 0)
		write(1, "No matches\n", 11);
}

int		main(void)
{
	int		x;
	int		y;
	char	*buffer;

	buffer = read_input();
	printf("%s", buffer);
	x = count_chars(buffer);
	y = count_lines(buffer);
	check_match(buffer, x, y);
	return (0);
}
