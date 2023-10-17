/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiananeves <fabiananeves@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:12:55 by fabiananeve       #+#    #+#             */
/*   Updated: 2023/10/15 15:22:20 by fabiananeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
   t_list *newnode;

   newnode = (t_list *)malloc(sizeof(*newnode));
   if (!newnode)
     return (NULL);
    newnode->content = content;
    newnode->next = NULL;
    return (newnode);
}