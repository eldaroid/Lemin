/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:36:34 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:28:00 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char *str, char c)
{
	int			i;
	int			index;
	char		**dest;

	i = 0;
	index = 0;
	if (!str || !c)
		return (NULL);
	dest = (char**)malloc(sizeof(char*) * (ft_count_words(str, c) + 1));
	if (!dest)
		return (NULL);
	while (*str == c)
		str++;
	while (str[i] != '\0')
	{
		dest[index] = ft_find_words(str, c, &i);
		index++;
	}
	dest[index] = 0;
	return (dest);
}
