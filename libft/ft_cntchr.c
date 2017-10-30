/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:58:14 by mpochuka          #+#    #+#             */
/*   Updated: 2017/04/20 16:58:18 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** function counts number of occurence of char in string
** if string is not given it returns -1
*/

#include "libft.h"

ssize_t				ft_cntchr(char *str, char c)
{
	ssize_t res;

	res = 0;
	if (str)
	{
		while (*str != '\0')
		{
			if (*str == c)
				res++;
			str++;
		}
		return (res);
	}
	return (-1);
}
