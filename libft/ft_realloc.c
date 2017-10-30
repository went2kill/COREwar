/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:28:53 by mpochuka          #+#    #+#             */
/*   Updated: 2017/04/20 18:28:56 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function allocates new memory of defined size
** copies memory by defined size,
** free old memory
** and returns pointer to new memory.
*/

#include "libft.h"

char			*ft_realloc(char **str, size_t len)
{
	char	*new_str;

	new_str = NULL;
	if (str && *str)
	{
		new_str = ft_memmove(ft_strnew(len), *str, MIN(ft_strlen(*str), len));
		ft_strdel(str);
		return (new_str);
	}
	return (ft_strnew(len));
}
