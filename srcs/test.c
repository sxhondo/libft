#include	<string.h>
#include <stdio.h>
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*tmp_ptr;
	unsigned char	tmp_char;

	tmp_char = (unsigned char) c;
	tmp_ptr = (char *) b;
	i = 0;
	if (tmp_ptr == NULL)
		return (0);
	else
	{
		while (i < len)
		{
			tmp_ptr[i] = tmp_char;
			i++;
		}
		return (b);
	}
}

int     main()
{
	char    *str = "hello";
	printf("%s", ft_memset(str, '_', 12));
	return (0);
 }
