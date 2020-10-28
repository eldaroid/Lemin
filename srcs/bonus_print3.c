/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_print3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:13:09 by avenonat          #+#    #+#             */
/*   Updated: 2020/10/28 18:50:55 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	bonus_print3(t_rooms *r, int i)
{
	ft_putstr(RED);
	write(1, "  This way choose ", 18);
	ft_putnbr(r->ant_path[i]);
	write(1, " walking ants\n", 14);
}
