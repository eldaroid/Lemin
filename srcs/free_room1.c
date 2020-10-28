/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_room1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:18:27 by avenonat          #+#    #+#             */
/*   Updated: 2020/10/28 18:51:38 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	free_room1(t_rooms *t, int i)
{
	int j;

	if (t->room_name_list != NULL)
	{
		ft_lstdel(&(t->room_name_list), &delete_content);
		t->room_name_list = NULL;
	}
	j = i;
	if (t->visited != NULL)
	{
		while (j < t->vhod)
			free(t->visited[j++]);
		ft_memdel((void**)&(t->visited));
	}
	j = i;
	if (t->prev != NULL)
	{
		while (j < t->vhod)
			free(t->prev[j++]);
		ft_memdel((void**)&(t->prev));
	}
}
