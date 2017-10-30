/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpochuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 16:50:05 by mpochuka          #+#    #+#             */
/*   Updated: 2016/12/07 16:50:05 by mpochuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description: Allocates (with malloc(3)) and returns a “fresh” link.
** The variables content and content_size of the new link are ini- tialized by
** copy of the parameters of the function. If the pa- rameter content is nul,
** the variable content is initialized to NULL and the variable content_size is
** initialized to 0 even if the parameter content_size isn’t. The variable next
** is initialized to NULL. If the allocation fails, the function returns NULL.
** Param. #1: The content to put in the new link.
** Param. #2: The size of the content of the new link.
** Return value: The new link.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new)
	{
		new->next = NULL;
		if (content)
		{
			new->content = (void *)malloc(content_size);
			ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
			return (new);
		}
		new->content = NULL;
		new->content_size = 0;
		return (new);
	}
	return (NULL);
}
