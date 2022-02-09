/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:29:55 by anifanto          #+#    #+#             */
/*   Updated: 2021/06/02 16:30:44 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= (nb / 2))
	{
		if (nb % i == 0 || nb < i)
			return (0);
		else
			i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb += 1;
	return (nb);
}
