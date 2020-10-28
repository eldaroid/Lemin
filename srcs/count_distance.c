/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_distance.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 14:50:54 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:51:10 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		count_distance(t_rooms *r, int n)
{
	int i;
	int k;

	k = 1;
	i = r->end;
	while (r->prev[n][i] != r->start)
	{
		k++;
		i = r->prev[n][i];
	}
	return (k);
}
