/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 15:42:19 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:30:37 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		main(int ac, char **av)
{
	t_rooms	*rooms;
	int		ants;
	int		ant_end;
	int 	fd;

	fd = open(av[2], O_RDONLY);
	ants = read_ants(fd);
	rooms = init_rooms();
	if (ac == 2 && av[1][0] == 'b')
		rooms->flag_bonus = 1;
	else
		*av = NULL;
	read_rooms(rooms, ants, fd);
	if (!rooms->paths)
		write_error(1, rooms);
	find_paths(rooms);
	devide_ants(rooms, ants);
	ant_end = walking_ants(rooms, ants);
	if (rooms->flag_bonus)
		bonus_print(rooms, ants, ant_end);
	free_room(rooms, 0);
	return (1);
}
