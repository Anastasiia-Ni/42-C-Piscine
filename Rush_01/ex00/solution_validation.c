/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <stasy247@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 12:34:39 by anifanto          #+#    #+#             */
/*   Updated: 2022/02/09 10:45:41 by anifanto         ###   ########.fr       */
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

int		check_col_up_inputs(void)
{
	int row;
	int col;
	int last_tower;
	int total_counted_towers;

	col = 0;
	while (col <= 3)
	{
		row = 0;
		last_tower = 0;
		total_counted_towers = 0;
		while (row <= 3)
		{
			if (last_tower < g_board[row][col])
			{
				last_tower = g_board[row][col];
				total_counted_towers++;
			}
			row++;
		}
		if (total_counted_towers != g_col_up[col])
			return (0);
		col++;
	}
	return (1);
}

int		check_col_down_inputs(void)
{
	int row;
	int col;
	int last_tower;
	int total_counted_towers;

	col = 0;
	while (col <= 3)
	{
		row = 3;
		last_tower = 0;
		total_counted_towers = 0;
		while (row >= 0)
		{
			if (last_tower < g_board[row][col])
			{
				last_tower = g_board[row][col];
				total_counted_towers++;
			}
			row--;
		}
		if (total_counted_towers != g_col_down[col])
			return (0);
		col++;
	}
	return (1);
}

int		check_row_left_inputs(void)
{
	int row;
	int col;
	int last_tower;
	int total_counted_towers;

	row = 0;
	while (row <= 3)
	{
		col = 0;
		last_tower = 0;
		total_counted_towers = 0;
		while (col <= 3)
		{
			if (last_tower < g_board[row][col])
			{
				last_tower = g_board[row][col];
				total_counted_towers++;
			}
			col++;
		}
		if (total_counted_towers != g_row_left[row])
			return (0);
		row++;
	}
	return (1);
}

int		check_row_right_inputs(void)
{
	int row;
	int col;
	int last_tower;
	int total_counted_towers;

	row = 0;
	while (row <= 3)
	{
		col = 3;
		last_tower = 0;
		total_counted_towers = 0;
		while (col >= 0)
		{
			if (last_tower < g_board[row][col])
			{
				last_tower = g_board[row][col];
				total_counted_towers++;
			}
			col--;
		}
		if (total_counted_towers != g_row_right[row])
			return (0);
		row++;
	}
	return (1);
}

int		func_is_valid(void)
{
	if (check_col_up_inputs() && check_col_down_inputs())
	{
		if (check_row_left_inputs() && check_row_right_inputs())
		{
			return (1);
		}
		return (0);
	}
	else
		return (0);
}
