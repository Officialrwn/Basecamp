/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 09:22:28 by leotran           #+#    #+#             */
/*   Updated: 2021/06/13 13:16:24 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

long	g_index_r0 = 0;

void	print_first_row_rush00(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i || x == 1)
		{
			str[g_index_r0] = 'o';
			g_index_r0++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r0] = '-';
			g_index_r0++;
		}
		x--;
	}
	str[g_index_r0] = '\n';
	g_index_r0++;
}

void	print_middle_row_rush00(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i || x == 1)
		{
			str[g_index_r0] = '|';
			g_index_r0++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r0] = ' ';
			g_index_r0++;
		}
		x--;
	}
	str[g_index_r0] = '\n';
	g_index_r0++;
}

void	print_last_row_rush00(int x, char *str)
{
	int i;

	i = x;
	while (x >= 1)
	{
		if (x == i || x == 1)
		{
			str[g_index_r0] = 'o';
			g_index_r0++;
		}
		if (x > 1 && x < i)
		{
			str[g_index_r0] = '-';
			g_index_r0++;
		}
		x--;
	}
	str[g_index_r0] = '\n';
	g_index_r0++;
}

char	*rush00(int x, int y)
{
	char *str;

	str = malloc(sizeof(char) * ((x + 1) * y + 1));
	if (x > 0)
		print_first_row_rush00(x, str);
	while (y > 2)
	{
		print_middle_row_rush00(x, str);
		y--;
	}
	if (y > 1)
		print_last_row_rush00(x, str);
	str[g_index_r0] = '\0';
	return (str);
}
