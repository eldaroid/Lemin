/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:08:03 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:45:25 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lnew;

	if (!(lnew = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		lnew->content = NULL;
		lnew->content_size = 0;
	}
	else
	{
		lnew->content_size = content_size;
		if (!(lnew->content = malloc(content_size)))
		{
			free(lnew);
			return (NULL);
		}
		ft_memcpy(lnew->content, content, content_size);
	}
	lnew->next = NULL;
	return (lnew);
}
