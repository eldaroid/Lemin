/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_paths.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:34:18 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:51:29 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	find_paths(t_rooms *r)
{
	int *temp;
	int t;
	int n;

	t = 0;
	n = 0;
	pre_prev_visit(r);
	while (r->vihod > r->count_vihod)
	{
		fill_visited(r, n);
		temp = path_sear_g(r, n);
		temp = find_paths_1(r, temp, t, n);
		t++;
		ft_memdel((void **)&temp);
		n++;
	}
	reverse_path(r, r->count_vihod);
	while (t < r->vhod)
	{
		r->prev[t] = minus_t_p(1);
		r->visited[t] = minus_t_p(1);
		r->next[t] = minus_t_p(1);
		t++;
	}
}
