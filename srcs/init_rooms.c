/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_rooms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:08:51 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:51:54 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

t_rooms		*init_rooms(void)
{
	t_rooms	*t;

	t = (t_rooms *)malloc(sizeof(t_rooms));
	t->paths = NULL;
	t->index_rooms = 0;
	t->vhod = 0;
	t->count_lines = 0;
	t->vihod = 0;
	t->count_vihod = 0;
	t->room_names = NULL;
	t->visited = NULL;
	t->next = NULL;
	t->prev = NULL;
	t->distance = 0;
	t->room_name_list = NULL;
	t->start = -1;
	t->end = -1;
	t->length = NULL;
	t->ant_path = NULL;
	t->count_distance = NULL;
	t->count_steps = 0;
	t->flag_bonus = 0;
	t->walk = NULL;
	t->nant_path = NULL;
	return (t);
}
