/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 19:33:27 by mpochuka          #+#    #+#             */
/*   Updated: 2017/04/20 19:33:29 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function allocates new memory for array of pointers of defined number
** of cells, copies number of defined pointers,
** free old array
** and returns pointer to new extended array.
*/

#include "libft.h"

void			**ft_extarr(void ***old, size_t num)
{
	void	**new;
	size_t	len;

	new = NULL;
	len = 0;
	if (old && *old)
	{
		new = ft_newarr(num);
		len = ft_arrlen(*old);
		len = MIN(len, num);
		while (len > 0)
		{
			new[len] = (*old)[len];
			len--;
		}
		new[len] = (*old)[len];
		ft_arrdel(old);
		*old = NULL;
		return (new);
	}
	return (ft_newarr(num));
}
