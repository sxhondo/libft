
#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list tmp;
    lst = 0;
    tmp = *f(lst);
    return (NULL);
}
