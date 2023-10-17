/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:19:44 by faneves           #+#    #+#             */
/*   Updated: 2023/10/17 17:29:55 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*ptn;

	if (!lst || !f || !del)
		return (NULL);
	newlist = ft_lstnew(f(lst->content));
	if (!newlist)
		return (NULL);
	ptn = newlist;
	lst = lst->next;
	while (lst)
	{
		ptn->next = ft_lstnew(f(lst->content));
		if (!ptn-> next)
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
		ptn = ptn->next;
		lst = lst->next;
	}
	ptn->next = NULL;
	return (newlist);
}
