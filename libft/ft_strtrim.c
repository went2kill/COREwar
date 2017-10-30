/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 15:19:43 by mpochuka          #+#    #+#             */
/*   Updated: 2016/12/02 15:19:44 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc) and returns a copy of the string
** given as argument without whitespaces at the beginning or at
** the end of the string. Will be considered as whitespaces the
** following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces
** at the beginning or at the end, the function returns a
** copy of s. If the allocation fails the function returns NULL.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		end;
	int		start;
	char	*new_str;

	if (s)
	{
		start = ft_strcstr(s, " \n\t", 0);
		end = ft_strcstr(s, " \n\t", 1);
		if (start >= 0 && end >= 0)
		{
			new_str = ft_strnew(end - start + 1);
			if (new_str)
				return (ft_strncpy(new_str, &s[start], end - start + 1));
			return (NULL);
		}
	}
	return (ft_strnew(0));
}
