/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:09:25 by mpochuka          #+#    #+#             */
/*   Updated: 2016/11/22 19:09:27 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned long	i;
	char			*s2;

	s2 = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	i = 0;
	if (s2)
	{
		while (s1[i] != '\0')
		{
			s2[i] = s1[i];
			i++;
		}
	}
	else
	{
		write(2, "\nCannot allocate memory in ft_strdup!\n", 38);
		return (NULL);
	}
	s2[i] = '\0';
	return (s2);
}
