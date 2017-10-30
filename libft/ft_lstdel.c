/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 16:48:17 by mpochuka          #+#    #+#             */
/*   Updated: 2016/12/07 16:48:19 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description: Takes as a parameter the adress of a pointer to a link and frees
** the memory of this link and every successors of that link using the functions
** del and free(3). Finally the pointer to the link that was just freed must be
** set to NULL.
** Param. #1: The address of a pointer to the list head that needs to be freed.
** Return value: None.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		if ((*alst)->next)
			tmp = (*alst)->next;
		else
			tmp = NULL;
		free(*alst);
		*alst = tmp;
	}
	alst = NULL;
}
