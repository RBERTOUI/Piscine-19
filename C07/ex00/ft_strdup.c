/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 12:07:13 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/18 12:33:11 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *ptr;
	int strlen;

	strlen = 0;
	while (src[strlen])
		strlen++;
	ptr = malloc((strlen + 1) * sizeof(char));
	strlen = 0;
	while (src[strlen])
	{
		ptr[strlen] = src[strlen];
		strlen++;
	}
	ptr[strlen] = '\0';
	return (ptr);
}
