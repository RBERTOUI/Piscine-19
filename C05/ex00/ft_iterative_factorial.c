/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:07:57 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/13 19:49:16 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int nbr;

	nbr = nb;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	while (i < nbr)
	{
		nb *= i;
		i++;
	}
	return (nb);
}
