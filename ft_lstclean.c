/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiananeves <fabiananeves@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:32:59 by fabiananeve       #+#    #+#             */
/*   Updated: 2023/10/16 19:37:33 by fabiananeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
  t_list *next;
  t_list *actual;

  actual = *lst;
  while(actual)
  {
    next = actual->next;
    ft_lstdelone(actual, del);
    actual = next;
  }
  *lst = NULL;
}