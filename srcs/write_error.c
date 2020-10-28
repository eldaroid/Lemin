/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 15:54:20 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:53:01 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	write_error(int n, t_rooms *r)
{
	if (n)
	{
		write(2, "ERROR\n", 6);
		free_room(r, 0);
		exit(0);
	}
}
