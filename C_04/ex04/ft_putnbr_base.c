/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:07:56 by anifanto          #+#    #+#             */
/*   Updated: 2021/05/31 11:41:22 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

int		ft_repeat(char *bs)
{
	int k;
	int n;

	k = 0;
	while (bs[k] != '\0')
	{
		n = k + 1;
		while (bs[n] != '\0')
		{
			if (bs[k] == bs[n])
				return (1);
			n++;
		}
		k++;
	}
	return (0);
}

int		is_base(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb, int radix, char *base)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / radix, radix, base);
		ft_putnbr(nb % radix, radix, base);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb, radix, base);
	}
	else if (nb < radix)
	{
		write(1, &(base[nb]), 1);
	}
	else if (nb >= radix)
	{
		ft_putnbr(nb / radix, radix, base);
		ft_putnbr(nb % radix, radix, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int base_is_ok;
	int radix;

	i = 0;
	base_is_ok = 1;
	if (base[i] == '\0')
		base_is_ok = 0;
	if (ft_repeat(base))
		base_is_ok = 0;
	if (!is_base(base))
		base_is_ok = 0;
	if (base_is_ok)
	{
		radix = ft_strlen(base);
		ft_putnbr(nbr, radix, base);
	}
}
