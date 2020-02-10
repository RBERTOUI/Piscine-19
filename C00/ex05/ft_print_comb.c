/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:00:11 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/06 19:03:47 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int nbr1;
	int nbr2;
	int nbr3;

	nbr1 = '0';
	while (nbr1 <= '7')
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= '8')
		{
			nbr3 = nbr2 + 1;
			while (nbr3 <= '9')
			{
				ft_putchar(nbr1);
				ft_putchar(nbr2);
				ft_putchar(nbr3);
				if (nbr1 != '7' || nbr2 != '8' || nbr3 != '9')
					write(1, ", ", 2);
				nbr3++;
			}
			nbr2++;
		}
		nbr1++;
	}
}
