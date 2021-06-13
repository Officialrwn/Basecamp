/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_rush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:14:36 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/06/13 08:20:31 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		check_rush_00(char *input, int x, int y, int count)
{
	char *new;

	new = rush00(x, y);
	if (ft_strcmp(input, new) == 0)
	{
		print_output(0, x, y, count);
		return (1);
	}
	return (0);
}

int		check_rush_01(char *input, int x, int y, int count)
{
	char *new;

	new = rush01(x, y);
	if (ft_strcmp(input, new) == 0)
	{
		print_output(1, x, y, count);
		return (1);
	}
	return (0);
}

int		check_rush_02(char *input, int x, int y, int count)
{
	char *new;

	new = rush02(x, y);
	if (ft_strcmp(input, new) == 0)
	{
		print_output(2, x, y, count);
		return (1);
	}
	return (0);
}

int		check_rush_03(char *input, int x, int y, int count)
{
	char *new;

	new = rush03(x, y);
	if (ft_strcmp(input, new) == 0)
	{
		print_output(3, x, y, count);
		return (1);
	}
	return (0);
}

int		check_rush_04(char *input, int x, int y, int count)
{
	char *new;

	new = rush04(x, y);
	if (ft_strcmp(input, new) == 0)
	{
		print_output(4, x, y, count);
		return (1);
	}
	return (0);
}
