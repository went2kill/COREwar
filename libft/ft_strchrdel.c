/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:27:50 by mpochuka          #+#    #+#             */
/*   Updated: 2017/07/10 21:28:17 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** pos is set from zero
** deletes char at given position and shifts string to left
** does not reallocate memory, just nullify empy space at end
*/

#include "libft.h"

char		*ft_strchrdel(char *str, size_t pos)
{
	size_t len;

	if (str)
	{
		len = ft_strlen(str);
		while (++pos < len)
			str[pos - 1] = str[pos];
		str[pos - 1] = '\0';
	}
	return (str);
}
