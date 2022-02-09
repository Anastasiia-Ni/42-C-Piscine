/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <stasy247@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 12:20:19 by anifanto          #+#    #+#             */
/*   Updated: 2022/02/09 10:45:27 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int g_col_up[4];
int g_col_down[4];
int g_row_left[4];
int g_row_right[4];
int g_board[4][4];
int g_test_board[4][4];
int g_last_board[4][4];
int g_valid = 0;

int	main(int argc, char **argv)
{
	int row;
	int col;
	int x;

	input(argv[1]);
	arry1(argv[1]);
	if (argc == 2 && solve_board())
	{
		row = -1;
		while (++row <= 3)
		{
			col = -1;
			while (++col <= 3)
			{
				x = g_last_board[row][col] + 48;
				write(1, &x, 1);
				if (col < 3)
					write(1, " ", 1);
			}
			write(1, "\n", 1);
		}
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
