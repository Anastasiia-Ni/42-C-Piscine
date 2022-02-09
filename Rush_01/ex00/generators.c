/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <stasy247@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 12:34:39 by anifanto          #+#    #+#             */
/*   Updated: 2022/02/09 10:44:39 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

extern int g_col_up[];
extern int g_col_down[];
extern int g_row_left[];
extern int g_row_right[];
extern int g_board[4][4];
extern int g_test_board[4][4];
extern int g_last_board[4][4];
extern int g_valid;

void	check_4_input_in_cols(int col)
{
	int row;

	while (col <= 3)
	{
		if (g_col_up[col] == 4)
		{
			row = 0;
			while (row <= 3)
			{
				g_board[row][col] = row + 1;
				row++;
			}
		}
		if (g_col_down[col] == 4)
		{
			row = 0;
			while (row <= 3)
			{
				g_board[row][col] = (4 - row);
				row++;
			}
		}
		col++;
	}
}

void	check_4_input_in_rows(int row)
{
	int col;

	while (row <= 3)
	{
		if (g_row_left[row] == 4)
		{
			col = 0;
			while (col <= 3)
			{
				g_board[row][col] = col + 1;
				col++;
			}
		}
		if (g_row_right[row] == 4)
		{
			col = 0;
			while (col <= 3)
			{
				g_board[row][col] = (4 - col);
				col++;
			}
		}
		row++;
	}
}

void	check_1_input(void)
{
	int row;
	int col;

	col = 0;
	while (col <= 3)
	{
		if (g_col_up[col] == 1)
			g_board[0][col] = 4;
		if (g_col_down[col] == 1)
			g_board[3][col] = 4;
		col++;
	}
	row = 0;
	while (row <= 3)
	{
		if (g_row_left[row] == 1)
			g_board[row][0] = 4;
		if (g_row_right[row] == 1)
			g_board[row][3] = 4;
		row++;
	}
}

void	check_1and2_comb_inputs(void)
{
	int row;
	int col;

	col = 0;
	while (col <= 3)
	{
		if (g_col_up[col] == 1 && g_col_down[col] == 2)
			g_board[3][col] = 3;
		if (g_col_up[col] == 2 && g_col_down[col] == 1)
			g_board[0][col] = 3;
		col++;
	}
	row = 0;
	while (row <= 3)
	{
		if (g_row_left[row] == 1 && g_row_right[row] == 2)
			g_board[row][3] = 3;
		if (g_row_left[row] == 2 && g_row_right[row] == 1)
			g_board[row][0] = 3;
		row++;
	}
}

void	check_2and3_comb_inputs(void)
{
	int row;
	int col;

	col = 0;
	while (col <= 3)
	{
		if (g_col_up[col] == 2 && g_col_down[col] == 3)
			g_board[1][col] = 4;
		if (g_col_up[col] == 3 && g_col_down[col] == 2)
			g_board[2][col] = 4;
		col++;
	}
	row = 0;
	while (row <= 3)
	{
		if (g_row_left[row] == 2 && g_row_right[row] == 3)
			g_board[row][1] = 4;
		if (g_row_left[row] == 3 && g_row_right[row] == 2)
			g_board[row][2] = 4;
		row++;
	}
}
