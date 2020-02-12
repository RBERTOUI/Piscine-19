/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:07:57 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/12 20:11:42 by rbertoui         ###   ########.fr       */
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
	while (i < nbr)
	{
		nb *= i;
		i++;
	}
	return (nb);
}
