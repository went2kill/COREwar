/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 22:33:02 by mpochuka          #+#    #+#             */
/*   Updated: 2016/12/01 22:33:02 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr(long long n)
{
	size_t len;

	len = 0;
	if (n == LLONG_MIN)
	{
		len += ft_putchar('-');
		len += ft_putchar('9');
		n = 223372036854775808;
	}
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		len += ft_putchar(n + '0');
	}
	else
	{
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
	}
	return (len);
}
