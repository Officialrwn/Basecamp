/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 09:23:05 by leotran           #+#    #+#             */
/*   Updated: 2021/06/13 06:00:22 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	g_index_r4 = 0;

void	print_first_row_rush04(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i)
		{
			str[g_index_r4] = 'A';
			g_index_r4++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r4] = 'B';
			g_index_r4++;
		}
		if (x == 1 && i > 1)
		{
			str[g_index_r4] = 'C';
			g_index_r4++;
		}
		x--;
	}
	str[g_index_r4] = '\n';
	g_index_r4++;
}

void	print_middle_row_rush04(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i || x == 1)
		{
			str[g_index_r4] = 'B';
			g_index_r4++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r4] = ' ';
			g_index_r4++;
		}
		x--;
	}
	str[g_index_r4] = '\n';
	g_index_r4++;
}

void	print_last_row_rush04(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i)
		{
			str[g_index_r4] = 'C';
			g_index_r4++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r4] = 'B';
			g_index_r4++;
		}
		if (x == 1 && i > 1)
		{
			str[g_index_r4] = 'A';
			g_index_r4++;
		}
		x--;
	}
	str[g_index_r4] = '\n';
	g_index_r4++;
}

char	*rush04(int x, int y)
{
	char *str;

	str = malloc(sizeof(char) * ((x + 1) * y + 1));
	print_first_row_rush04(x, str);
	while (y > 2)
	{
		print_middle_row_rush04(x, str);
		y--;
	}
	if (y > 1)
		print_last_row_rush04(x, str);
	str[g_index_r4] = '\0';
	return (str);
}
