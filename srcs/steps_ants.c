/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps_ants.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 15:01:58 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:31:21 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	steps_ants(t_rooms *r, int i, int **walk)
{
	int j;

	j = r->count_distance[i] - 1;
	while (j >= 0)
	{
		if (walk[i][j])
		{
			write(1, "L", 1);
			ft_putnbr(walk[i][j]);
			write(1, "-", 1);
			ft_putstr(r->room_names[r->next[i][j + 1]]);
			write(1, " ", 1);
			r->count_steps++;
		}
		j--;
	}
}
