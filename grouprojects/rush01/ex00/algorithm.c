/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plehtika <plehtika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 10:24:59 by plehtika          #+#    #+#             */
/*   Updated: 2021/06/06 20:20:48 by plehtika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudokuheaders.h"

int		is_number_ok(int arr[9][9], int row, int col, int i)
{
	if (is_row_ok(arr, row, i) == 0 &&
		is_col_ok(arr, col, i) == 0 &&
		is_box_ok(arr, row - (row % 3), col - (col % 3), i) == 0)
		return (0);
	else
		return (-1);
}

int		check_zeros(int arr[9][9], int *row, int *col)
{
	*row = 0;
	while (*row < 9)
	{
		*col = 0;
		while (*col < 9)
		{
			if (arr[*row][*col] == 0)
				return (-1);
			*col = *col + 1;
		}
		*row = *row + 1;
	}
	return (0);
}

int		solve_sudoku(int arr[9][9])
{
	int	row;
	int col;
	int	i;

	row = 0;
	col = 0;
	i = 1;
	if (check_zeros(arr, &row, &col) == 0)
		return (0);
	while (i <= 9)
	{
		if (is_number_ok(arr, row, col, i) == 0)
		{
			arr[row][col] = i;
			if (solve_sudoku(arr) == 0)
				return (0);
			arr[row][col] = 0;
		}
		i++;
	}
	return (0);
}
