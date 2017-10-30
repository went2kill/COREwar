/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 16:48:43 by mpochuka          #+#    #+#             */
/*   Updated: 2016/12/07 16:48:45 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description: Takes as a parameter a link’s pointer address and frees the
** memory of the link’s content using the function del given as a parameter,
** then frees the link’s memory using free(3).
** The memory of next musnt not be freed under any circumstance.
** Finally, the pointer to the link that was just freed must be set to NULL.
** Param. #1: The adress of a pointer to a link that needs to be freed.
** Return value: None.
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}
