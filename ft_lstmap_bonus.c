/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:24:18 by nel-alla          #+#    #+#             */
/*   Updated: 2019/10/24 19:53:49 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	if (!(node = ft_lstnew(f(lst->content))))
	    return (NULL);
	lst = lst->next;
	while (lst)
	{
		if (!(ptr = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&node, ptr);
		lst = lst->next;
	}
	return (node);
}
