/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:12:31 by anifanto          #+#    #+#             */
/*   Updated: 2021/05/22 19:46:59 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int a)
{
	int i;

	i = 2;
	ft_putchar('o');

	if (a != 1)
	{
		while (i < a)
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	other_lines(int b)
{
	int j;

	j = 2;
	ft_putchar('|');
	if (b != 1)
	{
		while (j < b)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	if (x > 0 && y > 0)
	{
		i = 2;
		first_line(x);
		if (y > 2)
		{
			while (i < y)
			{
				other_lines(x);
				i++;
			}
		}
		if (y > 1)
		{
			first_line(x);
		}
	}
}
