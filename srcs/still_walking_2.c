/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   still_walking_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:03:57 by avenonat          #+#    #+#             */
/*   Updated: 2020/10/28 18:52:42 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		still_walking_2(t_rooms *r, int ant_end, int **walk, int i)
{
	int	j;

	j = r->count_distance[i] - 1;
	while (j >= 0)
	{
		if (j != r->count_distance[i] - 1)
			walk[i][j + 1] = walk[i][j];
		if ((j == r->count_distance[i] - 1) && walk[i][j])
		{
			ant_end++;
			walk[i][j] = 0;
		}
		if (j == 0)
			walk[i][j] = 0;
		j--;
	}
	return (ant_end);
}
