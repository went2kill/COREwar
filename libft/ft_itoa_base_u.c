/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:27:07 by mpochuka          #+#    #+#             */
/*   Updated: 2017/07/11 21:27:09 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** third parametr set big or small letters
** big_l = 1 means BIG LETTERS
** big_l = 0 means small letters
** like itoa, but only for unsigned values
** can convert to different bases
*/

#include "libft.h"

static char		symb_big(char pos)
{
	return ((pos < 10) ? (pos + '0') : (pos - 10 + 'A'));
}

static char		symb_small(char pos)
{
	return ((pos < 10) ? (pos + '0') : (pos - 10 + 'a'));
}

static void		conv_big(unsigned long long val,
							unsigned int b, int *i, char *str)
{
	if (val >= b)
		conv_big(val / b, b, i, str);
	str[(*i)++] = symb_big(val % b);
}

static void		conv_small(unsigned long long val,
							unsigned int b, int *i, char *str)
{
	if (val >= b)
		conv_small(val / b, b, i, str);
	str[(*i)++] = symb_small(val % b);
}

char			*ft_itoa_base_u(unsigned long long value,
								unsigned int base, int big_l, int prefix)
{
	int		i;
	char	*str;
	char	*tmp;

	i = 0;
	if (base < 2 || base > 16 || !(str = ft_strnew(64)))
		return (NULL);
	if (big_l)
		conv_big(value, base, &i, str);
	else
		conv_small(value, base, &i, str);
	str[i] = '\0';
	if (prefix && (base == 16 || base == 8))
	{
		if (base == 16)
			tmp = ft_strdup((big_l) ? "0X" : "0x");
		else
			tmp = ft_strdup("0");
		str = ft_strjoin_d(&tmp, &str, 3);
	}
	return (str);
}
