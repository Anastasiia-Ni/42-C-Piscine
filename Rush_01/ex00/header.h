/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <stasy247@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 12:34:39 by anifanto          #+#    #+#             */
/*   Updated: 2022/02/09 10:45:01 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_01_HEADER_Hz
# define RUSH_01_HEADER_H

# include <unistd.h>
# include <stdlib.h>

int		check_col_up_inputs(void);

int		check_col_down_inputs(void);

int		check_row_left_inputs(void);

int		check_row_right_inputs(void);

int		func_is_valid();

int		check_row_col_lines(int row, int col);

void	check_4_input_in_cols(int col);

void	check_4_input_in_rows(int row);

void	check_1_input(void);

void	check_1and2_comb_inputs(void);

void	check_2and3_comb_inputs(void);

int		solution(int row, int col);

void	recursive_col(int row, int col, int *guess);

int		solution(int row, int col);

int		solve_board(void);

int		is_number(char c);

int		ft_strlen(char *str);

int		is_check(char *str);

int		count_digit(char *str);

int		**create_square(int size);

void	fill_input_square(int **input_sq, char *array, int s);

void	print_square(int **square, int size);

void	free_square(int **square, int size);

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		input(char *str);

void	arry1(char *str);

void	arry2(char *str, int i);

#endif
