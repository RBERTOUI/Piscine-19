/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 14:11:59 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/18 18:06:01 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int diff;

	diff = max - min;
	i = 0;

	if(min >= max)
	{	
		*range = NULL;
		return (0);
	}
	if ((*range = (malloc(diff * sizeof(int)))))
	{
		while (i < max)
		{
			(*range)[i] = min;
			i++;
			min++;
		}
		return (diff);
	}
	return (-1);
}
