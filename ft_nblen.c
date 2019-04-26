
#include "libft.h"

int     ft_nblen(int nb)
{
    int				len;

    len = 0;
    if (nb <= 0)
        len = 1;
    while (nb != 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}
