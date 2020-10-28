/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 09:02:31 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:45:38 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	c2;

	i = 0;
	c2 = (unsigned char)c;
	s2 = (unsigned char*)s;
	while (n > i)
	{
		if (s2[i] == c2)
			return (&s2[i]);
		i++;
	}
	return (NULL);
}
