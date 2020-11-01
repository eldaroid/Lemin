/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walking_ants.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 10:38:00 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:31:36 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		walking_ants(t_rooms *r, int ants)
{
	int i;
	int j;
	int **walk;
	int ant_end;
	int *nant_path;

	if (!(walk = (int **)malloc(sizeof(int **) * (r->count_vihod))))
		exit(0);
	if (!(nant_path = (int *)malloc(sizeof(int *) * (r->count_vihod))))
		exit(0);
	i = 0;
	while (i < r->count_vihod)
	{
		if (r->ant_path[i])
			nant_path[i] = 1;
		if (!(walk[i] = (int *)malloc(sizeof(int *) * r->count_distance[i])))
			exit(0);
		j = 0;
		while (j < r->count_distance[i])
			walk[i][j++] = 0;
		i++;
	}
	ant_end = walking_ants_2(r, ants, walk, nant_path);
	ant_finish(r, walk);
	return (ant_end);
}
