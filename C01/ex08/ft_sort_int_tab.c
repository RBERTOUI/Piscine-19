/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 16:02:40 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/09 19:34:26 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int rev;
	int j;

	size = size - 1;
	i = 0;
	while (i == 0)
	{
		i = 1;
		j = 0;
		while (j < size)
		{
			if ((tab[j] > tab[j + 1]))
			{
				rev = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = rev;
				i = 0;
			}
			j++;
		}
	}
}
