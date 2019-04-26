
#include "libft.h"

int		ft_count_words(const char *str, const char c)
{
    size_t	i;
    int		cntr;

    cntr = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            i++;
        if (str[i] != c)
        {
            i++;
            cntr++;
        }
    }
    return (cntr);
}
