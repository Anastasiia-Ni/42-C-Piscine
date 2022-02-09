/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:56:37 by anifanto          #+#    #+#             */
/*   Updated: 2021/06/05 15:36:41 by anifanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != 0)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	if (*src == 0)
		return (dest);
	while (dest[i] != 0)
		i++;
	while (*src != 0)
		dest[i++] = *src++;
	dest[i] = 0;
	return (dest);
}

int		ft_length(int size, char **strs, char *sep)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		if (i + 1 < size)
			length += ft_strlen(sep);
		i++;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		i;

	i = 0;
	string = (char *)malloc(sizeof(*string) * (ft_length(size, strs, sep) + 1));
	if (string == NULL)
		return (NULL);
	*string = 0;
	if (size <= 0)
		return (string);
	while (i < size)
	{
		ft_strcat(string, strs[i]);
		if (i + 1 < size)
			ft_strcat(string, sep);
		i++;
	}
	return (string);
}
