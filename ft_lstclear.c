/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:32:59 by fabiananeve       #+#    #+#             */
/*   Updated: 2023/10/17 14:21:51 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*actual;

	actual = *lst;
	while (actual)
	{
		next = actual->next;
		ft_lstdelone(actual, del);
		actual = next;
	}
	*lst = NULL;
}
