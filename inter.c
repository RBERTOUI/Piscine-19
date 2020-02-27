/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:09:03 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/27 20:04:50 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	check_before(int i, char *str, char c)
{
	int j;

	j = 0;
	while (j < i)
	{
		if(str[j] == c)
			return (0);
		j++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 3)
		ft_putchar('\n');
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if(is_in_charset(argv[1][i], argv[2]) && (!(check_before(i, argv[1], argv[1][i]))))
				ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
}
