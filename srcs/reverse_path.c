/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:30:56 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:52:26 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	reverse_path(t_rooms *r, int k)
{
	int i;
	int j;
	int l;
	int n;

	n = 0;
	while (n < k)
	{
		l = count_distance(r, n);
		i = r->end;
		j = l;
		r->next[n][l] = r->end;
		while (r->prev[n][i] != r->start)
		{
			r->next[n][--j] = r->prev[n][i];
			i = r->prev[n][i];
		}
		r->next[n][--j] = r->prev[n][r->start];
		write(1, "\n", 1);
		n++;
	}
}
