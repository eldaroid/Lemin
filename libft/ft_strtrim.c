/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:16:14 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:28:37 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char			*ft_strtrim(char const *s)
{
	size_t		i;
	char		*new_str;

	if (!s)
		return (NULL);
	while (is_whitespace(*s))
		++s;
	i = 0;
	while (s[i])
		++i;
	while (i > 0 && is_whitespace(s[i - 1]))
		--i;
	if (!(new_str = ft_strnew(i)))
		return (NULL);
	if (i != 0)
		ft_strncpy(new_str, s, i);
	else
		*new_str = '\0';
	return (new_str);
}
