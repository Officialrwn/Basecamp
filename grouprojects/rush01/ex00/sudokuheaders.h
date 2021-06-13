/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokuheaders.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plehtika <plehtika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 19:32:21 by plehtika          #+#    #+#             */
/*   Updated: 2021/06/06 19:34:41 by plehtika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		solve_sudoku(int arr[9][9]);

int		is_row_ok(int arr[9][9], int row, int i);

int		is_col_ok(int arr[9][9], int col, int i);

int		is_box_ok(int arr[9][9], int startrow, int startcol, int i);
