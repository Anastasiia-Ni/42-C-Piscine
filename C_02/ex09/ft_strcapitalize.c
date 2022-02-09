/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:20:52 by anifanto          #+#    #+#             */
/*   Updated: 2021/05/26 11:33:55 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lower(char b)
{
	return (b >= 'a' && b <= 'z');
}

int		ft_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		is_alf_num(char a)
{
	return ((ft_lower(a)) || (ft_upper(a)) || (a >= '0' && a <= '9'));
}

int		is_first(char f, char fp)
{
	return ((is_alf_num(f)) && (!is_alf_num(fp)));
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if ((str[i] != '\0') && (ft_lower(str[i])))
	{
		str[i] -= 32;
	}
	i++;
	while (str[i] != '\0')
	{
		if (is_first(str[i], str[i - 1]) && (ft_lower(str[i])))
		{
			str[i] -= 32;
		}
		else if (!is_first(str[i], str[i - 1]) && (ft_upper(str[i])))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
