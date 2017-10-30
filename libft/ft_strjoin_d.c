/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 19:57:48 by mpochuka          #+#    #+#             */
/*   Updated: 2017/04/05 19:57:52 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**function works same as ft_strjoin,
**but takes 3rd parameter, which shows what string to free:
**0 - no free
**1 - free first string
**2 - free second string
**3 - free BOTH strings
*/

#include "libft.h"

char	*ft_strjoin_d(char **s1, char **s2, int del)
{
	char	*new;
	size_t	i;
	char	*one;
	char	*two;

	i = 0;
	one = *s1;
	two = *s2;
	if (one && two && (new = ft_strnew(ft_strlen(one) + ft_strlen(two) + 1)))
	{
		while (*one)
		{
			new[i++] = *one;
			one++;
		}
		while (*two)
		{
			new[i++] = *two;
			two++;
		}
		(del == 1 || del == 3) ? ft_strdel(s1) : 0;
		(del == 2 || del == 3) ? ft_strdel(s2) : 0;
		return (new);
	}
	return (NULL);
}
