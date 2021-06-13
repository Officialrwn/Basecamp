/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 09:22:36 by leotran           #+#    #+#             */
/*   Updated: 2021/06/13 06:00:14 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	g_index_r1 = 0;

void	print_first_row_rush01(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i)
		{
			str[g_index_r1] = '/';
			g_index_r1++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r1] = '*';
			g_index_r1++;
		}
		if (x == 1 && i > 1)
		{
			str[g_index_r1] = '\\';
			g_index_r1++;
		}
		x--;
	}
	str[g_index_r1] = '\n';
	g_index_r1++;
}

void	print_middle_row_rush01(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i || x == 1)
		{
			str[g_index_r1] = '*';
			g_index_r1++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r1] = ' ';
			g_index_r1++;
		}
		x--;
	}
	str[g_index_r1] = '\n';
	g_index_r1++;
}

void	print_last_row_rush01(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i)
		{
			str[g_index_r1] = '\\';
			g_index_r1++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r1] = '*';
			g_index_r1++;
		}
		if (x == 1 && i > 1)
		{
			str[g_index_r1] = '/';
			g_index_r1++;
		}
		x--;
	}
	str[g_index_r1] = '\n';
	g_index_r1++;
}

char	*rush01(int x, int y)
{
	char *str;

	str = malloc(sizeof(char) * ((x + 1) * y + 1));
	print_first_row_rush01(x, str);
	while (y > 2)
	{
		print_middle_row_rush01(x, str);
		y--;
	}
	if (y > 1)
		print_last_row_rush01(x, str);
	str[g_index_r1] = '\0';
	return (str);
}
