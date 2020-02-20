/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 18:16:06 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/19 19:03:12 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strlent(int size, char **strs, char *sep)
{
	int i;
	int lengtot;

	i = 0;
	lengtot = 0;
	while (i < size)
	{
		lengtot = lengtot + ft_strlen(strs[i]);
		i++;
	}
	lengtot = lengtot + (size - 1) * ft_strlen(sep) + 1;
	return (lengtot);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	i = 0;
	if (size == 0)
	{
		dest = malloc(sizeof(char));
		dest[i] = '\0';
		return (dest);
	}
	if (size < 0)
		return (0);
	if (!(dest = (char*)malloc(sizeof(char) * ft_strlent(size, strs, sep))))
		return (0);
	dest[i] = '\0';
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
