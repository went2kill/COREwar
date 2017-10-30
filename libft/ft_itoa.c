/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 22:17:00 by mpochuka          #+#    #+#             */
/*   Updated: 2016/12/05 22:17:01 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate(long long nbr, size_t *len)
{
	size_t	i;
	size_t	neg;

	i = 0;
	neg = 0;
	if (nbr)
	{
		if (nbr < 0)
		{
			neg = 1;
			nbr = -nbr;
		}
		while (nbr > 0)
		{
			nbr = nbr / 10;
			i++;
		}
		*len = i + neg;
	}
	return (ft_strnew(*len));
}

static void	write_to_str(char *str, unsigned long long nbr, size_t pos)
{
	if (nbr > 9)
	{
		str[pos] = (nbr % 10) + '0';
		nbr = nbr / 10;
		pos--;
		write_to_str(str, nbr, pos);
	}
	else
		str[pos] = (nbr % 10) + '0';
	return ;
}

char		*ft_itoa(long long nbr)
{
	char	*res;
	size_t	len;

	if (nbr == LLONG_MIN)
		return (ft_strdup("-9223372036854775808"));
	len = 1;
	res = allocate(nbr, &len);
	if (res)
	{
		if (nbr < 0)
		{
			res[0] = '-';
			nbr = -nbr;
			len--;
			write_to_str(res, nbr, len);
			return (res);
		}
		write_to_str(res, nbr, len - 1);
		return (res);
	}
	return (NULL);
}
