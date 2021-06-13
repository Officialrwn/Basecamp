/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 09:22:48 by leotran           #+#    #+#             */
/*   Updated: 2021/06/13 13:16:35 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

long	g_index_r3 = 0;

void	print_first_row_rush03(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i)
		{
			str[g_index_r3] = 'A';
			g_index_r3++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r3] = 'B';
			g_index_r3++;
		}
		if (x == 1 && i > 1)
		{
			str[g_index_r3] = 'C';
			g_index_r3++;
		}
		x--;
	}
	str[g_index_r3] = '\n';
	g_index_r3++;
}

void	print_middle_row_rush03(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i || x == 1)
		{
			str[g_index_r3] = 'B';
			g_index_r3++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r3] = ' ';
			g_index_r3++;
		}
		x--;
	}
	str[g_index_r3] = '\n';
	g_index_r3++;
}

void	print_last_row_rush03(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i)
		{
			str[g_index_r3] = 'A';
			g_index_r3++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r3] = 'B';
			g_index_r3++;
		}
		if (x == 1 && i > 1)
		{
			str[g_index_r3] = 'C';
			g_index_r3++;
		}
		x--;
	}
	str[g_index_r3] = '\n';
	g_index_r3++;
}

char	*rush03(int x, int y)
{
	char *str;

	str = malloc(sizeof(char) * ((x + 1) * y + 1));
	if (x > 0)
		print_first_row_rush03(x, str);
	while (y > 2)
	{
		print_middle_row_rush03(x, str);
		y--;
	}
	if (y > 1)
		print_last_row_rush03(x, str);
	str[g_index_r3] = '\0';
	return (str);
}
