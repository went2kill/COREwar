/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:06:05 by mpochuka          #+#    #+#             */
/*   Updated: 2016/11/24 18:06:05 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	size_t i;

	i = 0;
	if (s)
	{
		if (c != 0)
		{
			while (s[i] != '\0')
			{
				if (s[i] != c)
					i++;
				else
					return (&s[i]);
			}
		}
		else
			return (&s[ft_strlen(s)]);
	}
	return (NULL);
}
