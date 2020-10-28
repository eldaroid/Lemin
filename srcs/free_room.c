/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_room.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 20:19:39 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:51:33 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	free_room(t_rooms *r, int i)
{
	t_rooms *t;
	int		j;

	if (r)
	{
		t = r;
		j = i;
		if (t->room_names != NULL)
		{
			while (j < t->index_rooms)
				ft_strdel(&(t->room_names[j++]));
			ft_memdel((void**)&(t->room_names));
		}
		j = i;
		if (t->paths != NULL)
		{
			while (j < t->index_rooms)
				free(t->paths[j++]);
			ft_memdel((void**)&(t->paths));
		}
		free_room1(t, i);
		free_room2(t, i);
	}
}
