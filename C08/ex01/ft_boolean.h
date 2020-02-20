/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:53:57 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/20 13:37:46 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BOOLEAN_H
# define _FT_BOOLEAN_H

#include <unistd.h>

#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN(nbr) (nbr % 2 == 0) ? TRUE : FALSE

typedef int	t_bool;
#endif
