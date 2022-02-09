/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:20:23 by anifanto          #+#    #+#             */
/*   Updated: 2021/06/02 18:24:42 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int n;

	n = 1;
	if (argc)
	{
		while (n < argc)
		{
			ft_putstr(argv[n]);
			n++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
