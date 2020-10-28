/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sear_g.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:12:00 by avenonat          #+#    #+#             */
/*   Updated: 2020/10/28 18:52:32 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	sear_g(t_rooms *r, int n)
{
	r->prev[n] = zero_paths(r->index_rooms);
	r->next[n] = zero_paths(r->index_rooms);
	if (!n)
		r->visited[n] = zero_paths(r->index_rooms);
	r->prev[n][r->start] = r->start;
	if (r->start == r->end)
		write(1, "start=end\n", 10);
	r->visited[n][r->start] = 1;
}
