/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_e_ants.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:14:15 by avenonat          #+#    #+#             */
/*   Updated: 2020/10/28 18:52:29 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	s_e_ants(t_rooms *r, int ants)
{
	int	j;

	j = 0;
	while (++j <= ants)
	{
		write(1, "L", 1);
		ft_putnbr(j);
		write(1, "-", 1);
		ft_putstr(r->room_names[r->end]);
		write(1, " ", 1);
		r->count_steps++;
	}
	r->count_lines = 1;
	write(1, "\n", 1);
	free_room(r, 0);
	exit(0);
}
