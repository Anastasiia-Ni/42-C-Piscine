/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:28:14 by anifanto          #+#    #+#             */
/*   Updated: 2021/06/02 18:28:22 by anifanto         ###   ########.fr       */
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

	n = argc - 1;
	while (n > 0)
	{
		ft_putstr(argv[n]);
		n--;
		write(1, "\n", 1);
	}
	return (0);
}
