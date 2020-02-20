/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:34:27 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/20 16:42:24 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;
	int diff;

	if (min >= max)
		tab = NULL;
	else
	{
		diff = max - min;
		tab = malloc(diff * sizeof(int));
		i = 0;
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	return (tab);
}
