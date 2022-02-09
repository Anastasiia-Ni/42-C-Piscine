/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:31:07 by anifanto          #+#    #+#             */
/*   Updated: 2021/05/30 20:36:44 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char s)
{
	if (!(s >= '0' && s <= '9'))
	{
		return (0);
	}
	return (1);
}

int		is_space(char s)
{
	if (s == ' ' || s == '\n' || s == '\t')
		return (1);
	if (s == '\v' || s == '\f' || s == '\r')
		return (1);
	return (0);
}

int		is_sign(char s)
{
	if (s == '+' || s == '-')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	if (str == '\0')
		return (0);
	while (is_space(str[i]))
		i++;
	while (is_sign(str[i]))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (is_numeric(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	res = res * sign;
	return (res);
}
