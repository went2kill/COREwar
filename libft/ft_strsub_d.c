/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 17:19:13 by mpochuka          #+#    #+#             */
/*   Updated: 2017/07/01 17:19:15 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub_d(char **s, unsigned int start, size_t len)
{
	char	*new_str;
	char	*old;
	size_t	i;

	i = 0;
	old = *s;
	new_str = ft_strnew(len);
	if (new_str && old)
	{
		while (i < len)
		{
			new_str[i] = old[start + i];
			i++;
		}
		ft_strdel(s);
		return (new_str);
	}
	return (NULL);
}
