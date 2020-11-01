/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_distance.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 14:50:54 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:29:45 by fgracefo         ###   ########.fr       */
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
