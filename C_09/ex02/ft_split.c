/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:17:20 by anifanto          #+#    #+#             */
/*   Updated: 2021/06/06 18:34:16 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_space(char to_find, char *str)
{
	while (*str)
	{
		if (to_find == *str++)
			return (1);
	}
	return (0);
}

int		ft_size(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && (ft_space(*str, charset)))
			str++;
		if (*str && !(ft_space(*str, charset)))
		{
			count++;
			while (*str && !(ft_space(*str, charset)))
				str++;
		}
	}
	return (count);
}

char	*ft_word(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !ft_space(str[i], charset))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_space(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**array;

	array = (char **)malloc(sizeof(char *) * (ft_size(str, charset) + 1));
	i = 0;
	while (*str)
	{
		while (*str && ft_space(*str, charset))
			str++;
		if (*str && !ft_space(*str, charset))
		{
			array[i] = ft_word(str, charset);
			i++;
			while (*str && !ft_space(*str, charset))
				str++;
		}
	}
	array[i] = ((void *)0);
	return (array);
}
