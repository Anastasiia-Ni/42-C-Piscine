/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <stasy247@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 05:02:15 by anifanto          #+#    #+#             */
/*   Updated: 2022/02/09 10:45:12 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

extern int g_col_up[4];
extern int g_col_down[4];
extern int g_row_left[4];
extern int g_row_right[4];

int		input(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0 && (str[i] >= '1' && str[i] <= '4'))
			;
		else if (i % 2 == 1 && (str[i] == ' '))
			;
		else
			return (0);
		i++;
	}
	if (i == 31)
		return (1);
	else
		return (0);
}

void	arry1(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < 8)
	{
		g_col_up[j] = str[i] - 48;
		j++;
		i += 2;
	}
	j = 0;
	while (i < 16)
	{
		g_col_down[j] = str[i] - 48;
		j++;
		i += 2;
	}
	arry2(str, i);
}

void	arry2(char *str, int i)
{
	int j;

	j = 0;
	while (i < 24)
	{
		g_row_left[j] = str[i] - 48;
		j++;
		i += 2;
	}
	j = 0;
	while (i < 32)
	{
		g_row_right[j] = str[i] - 48;
		j++;
		i += 2;
	}
}
