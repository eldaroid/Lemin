/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ants_finish.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:23:48 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:29:24 by fgracefo         ###   ########.fr       */
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
