/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:13:33 by mpochuka          #+#    #+#             */
/*   Updated: 2016/11/29 18:13:34 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*u_dst;
	unsigned char	*u_src;
	size_t			i;

	u_dst = (unsigned char *)dst;
	u_src = (unsigned char *)src;
	i = 0;
	if ((size_t)dst < (size_t)src)
		while (len-- > 0)
		{
			u_dst[i] = u_src[i];
			i++;
		}
	else
		while (len-- > 0)
		{
			u_dst[len] = u_src[len];
		}
	return (dst);
}
