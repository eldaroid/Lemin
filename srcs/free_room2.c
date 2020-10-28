/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_room2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:20:11 by avenonat          #+#    #+#             */
/*   Updated: 2020/10/28 18:51:41 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	free_room2(t_rooms *t, int i)
{
	int j;

	j = i;
	if (t->next != NULL)
	{
		while (j < t->vhod)
			free(t->next[j++]);
		ft_memdel((void**)&(t->next));
	}
	j = i;
	if (t->walk != NULL)
	{
		while (j < t->count_vihod)
			free(t->walk[j++]);
		ft_memdel((void**)&(t->walk));
	}
	ft_memdel((void**)&(t->length));
	ft_memdel((void**)&(t->ant_path));
	ft_memdel((void**)&(t->count_distance));
	ft_memdel((void**)&(t->nant_path));
	ft_memdel((void**)&t);
	t = NULL;
}
