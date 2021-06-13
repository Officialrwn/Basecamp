/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rowcolboxcheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plehtika <plehtika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 19:33:38 by plehtika          #+#    #+#             */
/*   Updated: 2021/06/06 19:36:48 by plehtika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_row_ok(int arr[9][9], int row, int i)
{
	int tcol;

	tcol = 0;
	while (tcol < 9)
	{
		if (arr[row][tcol] == i)
			return (-1);
		tcol++;
	}
	return (0);
}

int		is_col_ok(int arr[9][9], int col, int i)
{
	int trow;

	trow = 0;
	while (trow < 9)
	{
		if (arr[trow][col] == i)
			return (-1);
		trow++;
	}
	return (0);
}

int		is_box_ok(int arr[9][9], int startrow, int startcol, int i)
{
	int trow;
	int tcol;

	trow = 0;
	tcol = 0;
	while (trow < 3)
	{
		while (tcol < 3)
		{
			if (arr[startrow + trow][startcol + tcol] == i)
				return (-1);
			tcol++;
		}
		trow++;
		tcol = 0;
	}
	return (0);
}
