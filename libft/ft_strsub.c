/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 21:50:39 by mpochuka          #+#    #+#             */
/*   Updated: 2016/12/01 21:50:40 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = ft_strnew(len);
	if (new_str && s)
	{
		while (i < len)
		{
			new_str[i] = s[start + i];
			i++;
		}
		return (new_str);
	}
	return (NULL);
}
