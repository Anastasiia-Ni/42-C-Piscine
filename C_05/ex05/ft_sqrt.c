/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:25:26 by anifanto          #+#    #+#             */
/*   Updated: 2021/06/02 16:54:49 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	while ((sqrt * sqrt) != nb)
	{
		if (sqrt == 46340)
			return (0);
		sqrt++;
	}
	if ((sqrt * sqrt) == nb)
		return (sqrt);
	return (0);
}
