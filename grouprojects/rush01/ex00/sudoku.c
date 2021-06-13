/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plehtika <plehtika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 09:31:47 by plehtika          #+#    #+#             */
/*   Updated: 2021/06/06 19:32:58 by plehtika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudokuheaders.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putrows(int arr[9][9])
{
	int y;
	int x;

	y = 0;
	x = 0;
	while (y < 9)
	{
		while (x < 9)
		{
			ft_putchar(arr[y][x] + '0');
			if (x != 8)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
		x = 0;
	}
}

int		ft_arglen(char **argv)
{
	int y;
	int x;

	y = 1;
	x = 0;
	while (y < 10)
	{
		while (argv[y][x] != '\0')
			x++;
		if (x != 9)
			return (-1);
		y++;
	}
	return (0);
}

int		ft_atoi_arrays(int arr[9][9], char **argv)
{
	int y;
	int x;

	y = 1;
	x = 0;
	while (y < 10)
	{
		while (x < 9)
		{
			if (!(argv[y][x] >= '1' && argv[y][x] <= '9') && argv[y][x] != '.')
				return (-1);
			else if (argv[y][x] == '.')
				arr[y - 1][x] = 0;
			else
				arr[y - 1][x] = argv[y][x] - '0';
			x++;
		}
		y++;
		x = 0;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		arr[9][9];
	char	*str;
	int		l;

	str = "Error\n";
	l = 0;
	if (argc != 10 || ft_arglen(argv) != 0 || ft_atoi_arrays(arr, argv) != 0)
	{
		while (str[l] != '\0')
			ft_putchar(str[l++]);
		return (0);
	}
	if (solve_sudoku(arr) == 0)
		ft_putrows(arr);
	return (0);
}
