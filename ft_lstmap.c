/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:03:27 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/26 17:49:18 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list  *new;

    if (lst != NULL && f != NULL)
    {
        if (!(new = f(lst)))
            free (new);
        if (new != NULL && lst->next != NULL)
            new->next = ft_lstmap(lst->next, f);
        return (new);
    }
    return (NULL);
}