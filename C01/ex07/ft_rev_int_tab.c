/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 21:30:35 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/09 17:30:07 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int rev;
	int i;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		rev = tab[size] + tab[i];
		tab[size] = rev - tab[size];
		tab[i] = rev - tab[i];
		i++;
		size--;
	}
}
