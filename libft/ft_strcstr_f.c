/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcstr_f.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 21:08:18 by mpochuka          #+#    #+#             */
/*   Updated: 2017/06/22 21:08:20 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**function search first (from end or start)
**occurence of any symbol, mentioned in string
**both string must be null-terminated. Function does not search for '\0'
**function return position
**to search from end  set parameter from_end=1, otherwise set to zero
**if all string was skipped then function returns -1
**if input is incorrect function returns -2
*/

#include "libft.h"

int		ft_strcstr_f(const char *big, const char *find, int from_end)
{
	int		i_b;
	size_t	i_f;

	i_f = 0;
	if (big && find && *big && *find)
	{
		i_b = (from_end ? ft_strlen(big) - 1 : 0);
		while (from_end ? i_b >= 0 : big[i_b] != '\0')
		{
			while (big[i_b] != find[i_f] && find[i_f] != '\0')
				i_f++;
			if (find[i_f] != '\0')
				break ;
			i_f = 0;
			i_b = i_b + (from_end ? (-1) : 1);
		}
		return (big[i_b] == '\0' ? -1 : i_b);
	}
	return (-2);
}
