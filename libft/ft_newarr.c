/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 19:26:48 by mpochuka          #+#    #+#             */
/*   Updated: 2017/04/20 19:26:51 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function creates array of pointers + 1
** last cell is NULL
*/

#include "libft.h"

void			**ft_newarr(size_t num)
{
	return ((void **)ft_memalloc(sizeof(void *) * (num + 1)));
}
