/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 20:49:34 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/27 14:56:06 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		nb_mots(char *str, char *charset)
{
	int i;
	int mots;

	i = 0;
	mots = 0;
	while (str[i])
	{
		while (str[i] && is_in_charset(str[i], charset))
			i++;
		if (str[i])
			mots++;
		while (str[i] && (!(is_in_charset(str[i], charset))))
			i++;
	}
	return (mots);
}

int		nb_of_char(char *str, char *charset, int i)
{
	int lettres;

	lettres = 0;
	while (str[i] && (!(is_in_charset(str[i], charset))))
	{
		lettres++;
		i++;
	}
	return (lettres);
}

char	*copy_mots(char *str, char *charset, int *ptri)
{
	int		lettres;
	int		j;
	char	*copy;

	j = 0;
	lettres = nb_of_char(str, charset, *ptri);
	if (!(copy = (char *)malloc((lettres + 1) * sizeof(char))))
		return (0);
	while (str[*ptri] && (!(is_in_charset(str[*ptri], charset))))
	{
		copy[j] = str[*ptri];
		(*ptri)++;
		j++;
	}
	copy[j] = '\n';
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		j;
	int		i;

	j = 0;
	i = 0;
	if (!(res = (char **)malloc((nb_mots(str, charset) + 1) * sizeof(char*))))
		return (0);
	while (j < nb_mots(str, charset))
	{
		while (str[i] && ((is_in_charset(str[i], charset))))
			i++;
		res[j] = copy_mots(str, charset, &i);
		j++;
	}
	res[j] = 0;
	return (res);
}
