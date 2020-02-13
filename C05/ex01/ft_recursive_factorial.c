/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:13:11 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/13 16:34:14 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int nbr;

	nbr = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nbr * ft_recursive_factorial(nb - 1));
}
