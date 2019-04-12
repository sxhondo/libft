/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 16:30:38 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/12 17:24:08 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s1, size_t n)
{
	size_t	i;
	int		*str;

	i = 0;
	str = s1;
	while (str[i])
	{
		str[i] = '1';
		i++;
	}

	printf("%n", str);

}

int		main()
{
	char	s1[] = "hello";
	void	*str;
	
	str = &s1;
	ft_bzero(str, 2);
}

