/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:31:42 by mpochuka          #+#    #+#             */
/*   Updated: 2017/03/30 15:31:48 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		symb(char pos)
{
	return ((pos < 10) ? (pos + '0') : (pos - 10 + 'A'));
}

static void		conv(long long val, int b, int *i, char *str)
{
	if (val <= -b || val >= b)
		conv(val / b, b, i, str);
	str[(*i)++] = symb(ABS(val % b));
}

char			*ft_itoa_base(long long value, int base)
{
	int		i;
	char	*str;

	i = 0;
	if (base < 2 || base > 16 || !(str = ft_strnew(64)))
		return (NULL);
	if (base == 10 && value < 0)
		str[i++] = '-';
	conv(value, base, &i, str);
	str[i] = '\0';
	return (str);
}
