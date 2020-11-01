/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vhod_vihod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:46:49 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:31:32 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	vhod_vihod(t_rooms *r)
{
	int i;

	i = 0;
	while (i < r->index_rooms)
	{
		if (r->paths[r->start][i] && i != r->start)
			r->vhod++;
		if (r->paths[r->end][i] && i != r->end)
			r->vihod++;
		i++;
	}
	write_error((r->vihod == 0 || r->vhod == 0), r);
}
