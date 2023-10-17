/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiananeves <fabiananeves@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:52:28 by fabiananeve       #+#    #+#             */
/*   Updated: 2023/10/16 18:52:45 by fabiananeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
 int count;

 count = 0;
 if (!lst)
    return (count);
 while (lst->next)
 {
  count++;
  lst = lst->next;
 }
 return(++count);
}