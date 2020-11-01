/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:03:32 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:29:28 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	bonus_print(t_rooms *r, int ants, int ant_end)
{
	write(1, "Starting ", 9);
	ft_putnbr(ants);
	write(1, " ants\nFinishing ", 16);
	ft_putnbr(ant_end);
	write(1, " ants\n", 6);
	bonus_print2(r);
}
