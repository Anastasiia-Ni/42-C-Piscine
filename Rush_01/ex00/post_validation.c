/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   post_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <stasy247@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 05:02:15 by anifanto          #+#    #+#             */
/*   Updated: 2022/02/09 10:45:34 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

extern	int g_col_up[];
extern	int g_col_down[];
extern	int g_row_left[];
extern	int g_row_right[];
extern	int g_board[4][4];
extern	int g_test_board[4][4];
extern	int g_last_board[4][4];
extern	int g_valid;

int		check_row_col_lines(int row, int col)
{
	int c;
	int r;

	c = 0;
	while (c <= 3)
	{
		if (c != col)
		{
			if (g_board[row][col] == g_board[row][c])
				return (0);
		}
		c++;
	}
	r = 0;
	while (r <= 3)
	{
		if (r != row)
		{
			if (g_board[row][col] == g_board[r][col])
				return (0);
		}
		r++;
	}
	return (1);
}

void	recursive_col(int row, int col, int *guess)
{
	while (*guess < 5)
	{
		if (g_valid)
			return ;
		g_board[row][col] = *guess;
		if (check_row_col_lines(row, col))
			solution(row, col + 1);
		*guess = *guess + 1;
		g_board[row][col] = 0;
	}
}

void	copy_last_valid_solution(void)
{
	int rows;
	int cols;

	g_valid = 1;
	rows = 0;
	while (rows <= 3)
	{
		cols = 0;
		while (cols <= 3)
		{
			g_last_board[rows][cols] = g_board[rows][cols];
			cols++;
		}
		rows++;
	}
}

int		solution(int row, int col)
{
	int guess;

	if (g_valid)
	{
		return (1);
	}
	if (row < 4)
	{
		if (col < 4)
		{
			guess = 1;
			if (g_test_board[row][col] == 0)
				recursive_col(row, col, &guess);
			else
				solution(row, col + 1);
		}
		else
			solution(row + 1, 0);
	}
	else
	{
		if (func_is_valid())
			copy_last_valid_solution();
	}
	return (g_valid);
}

int		solve_board(void)
{
	int row;
	int col;
	int i;

	i = 0;
	check_4_input_in_cols(i);
	check_4_input_in_rows(i);
	check_1_input();
	check_1and2_comb_inputs();
	check_2and3_comb_inputs();
	row = 0;
	while (row <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			g_test_board[row][col] = g_board[row][col];
			col++;
		}
		row++;
	}
	return (solution(0, 0));
}
