/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:22:38 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:49:47 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*h;

	h = (char*)haystack;
	if (!(*needle))
		return (h);
	i = 0;
	while (h[i] != '\0')
	{
		j = 0;
		while ((h[i + j] == needle[j]) && (needle[j]))
			j++;
		if (needle[j] == '\0')
			return (h + i);
		i++;
	}
	return (NULL);
}
