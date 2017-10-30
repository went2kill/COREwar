/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 17:37:19 by mpochuka          #+#    #+#             */
/*   Updated: 2016/12/07 17:37:20 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description: Iterates a list lst and applies the function f to each link to
** create a “fresh” list (using malloc(3)) resulting from the suc- cessive
** applications of f. If the allocation fails, the function returns NULL.
** Param. #1: A pointer’s to the first link of a list.
** Param. #2: The address of a function to apply to each link of a list.
** Return value: The new list.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new_head;

	if (!lst || !f)
		return (NULL);
	new_head = f(lst);
	tmp = new_head;
	lst = lst->next;
	while (lst)
	{
		tmp->next = f(lst);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (new_head);
}
