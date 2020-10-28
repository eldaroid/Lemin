/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_visited.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 11:25:13 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:51:23 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	fill_visited(t_rooms *r, int n)
{
	int i;
	int j;

	if (n)
	{
		r->visited[n] = zero_paths(r->index_rooms);
		j = 0;
		while (j < n)
		{
			i = r->end;
			while (r->prev[j][i] != r->start)
			{
				i = r->prev[j][i];
				r->visited[n][i] = 1;
			}
			j++;
		}
	}
}
