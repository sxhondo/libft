#include "libft.h"

int     ft_lstlen(t_list **lst)
{
    int     i;
    t_list  *tmp;

    i = 0;
    tmp = *lst;
    while (tmp != NULL)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}

int     main()
{
    int     i;
    t_list  *elem;
    t_list  *lst;

    i = 1;
    while (i <= 5)
    {
        elem = ft_lstnew("A", 1);
        ft_lstadd(&lst, elem);
        i++;
    }
}
