/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:55:46 by anifanto          #+#    #+#             */
/*   Updated: 2021/06/07 11:56:54 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			n++;
		i++;
	}
	return (n);
}