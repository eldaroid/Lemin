/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_print2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:33:33 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:29:31 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	bonus_print2(t_rooms *r)
{
	int	i;
	int	j;
	int	l;

	write(1, "All ants made ", 14);
	ft_putnbr(r->count_steps);
	write(1, " steps\nTotal number ", 20);
	i = -1;
	ft_putnbr(r->count_lines - 1);
	write(1, " lines\n", 7);
	while (++i < r->count_vihod)
	{
		l = count_distance(r, i);
		j = 0;
		while (j <= l)
		{
			ft_putstr(GREEN);
			ft_putstr(r->room_names[r->next[i][j++]]);
			write(1, "    ", 4);
		}
		bonus_print3(r, i);
	}
	ft_putstr(BLUE);
	ft_putstr("\nIt was hard track for our ants. They need to relax\n");
}
