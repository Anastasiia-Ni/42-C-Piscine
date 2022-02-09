/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:13:08 by anifanto          #+#    #+#             */
/*   Updated: 2021/06/04 18:14:45 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int size;
	int i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	if ((array = (int*)malloc(size * sizeof(int))) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = array;
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (size);
}
