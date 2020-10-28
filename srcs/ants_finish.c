/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ants_finish.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:23:48 by avenonat          #+#    #+#             */
/*   Updated: 2020/10/28 18:50:45 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void		ant_finish(t_rooms *r, int **walk)
{
	int i;

	i = 0;
	while (i < r->count_vihod)
	{
		free(walk[i]);
		i++;
	}
	free(walk);
}
