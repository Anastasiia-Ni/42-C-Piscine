/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <stasy247@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:26:34 by anifanto          #+#    #+#             */
/*   Updated: 2022/02/09 11:18:00 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			i = length;
	}
	if (i == (length - 1))
		return (1);
	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			i = length;
	}
	if (i == (length - 1))
		return (1);
	return (0);
}
