/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:40:09 by anifanto          #+#    #+#             */
/*   Updated: 2021/05/20 12:41:51 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int n;
	int m;

	n = 0;
	while (n < 99)
	{
		m = n + 1;
		while (m < 100)
		{
			ft_putchar((n / 10) + '0');
			ft_putchar((n % 10) + '0');
			ft_putchar(' ');
			ft_putchar((m / 10) + '0');
			ft_putchar((m % 10) + '0');
			if (n != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			m++;
		}
		n++;
	}
}
