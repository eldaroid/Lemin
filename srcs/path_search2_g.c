/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_search2_g.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 11:14:15 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:52:08 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		*path_search2_g(t_rooms *r, int *t_p, int t, int n)
{
	int	i;
	int	j;
	int k;
	int *t_p2;

	t_p2 = minus_t_p(r->index_rooms);
	j = 0;
	k = -1;
	while (t_p[++k] != -1 && r->count_vihod == t)
	{
		i = -1;
		while (++i < r->index_rooms)
		{
			if (r->paths[t_p[k]][i] && !(r->visited[n][i]))
			{
				r->prev[n][i] = t_p[k];
				if (i != r->end && (t_p2[j++] = i) >= -1)
					r->visited[n][i] = 1;
				else if (r->count_vihod++ >= 0)
					break ;
			}
		}
	}
	return (t_p2);
}
