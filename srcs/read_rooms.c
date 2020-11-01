/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_rooms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:01:04 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:30:56 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	read_rooms(t_rooms *r, int ants, int fd)
{
	char	*line;
	int		flag;

	flag = 0;
	while (gnl(&line, fd) != 0 && line != NULL)
	{
		if (ft_strchr(line, '-') != NULL)
		{
			add_rebro(r, line, ants, fd);
			ft_strdel(&line);
			break ;
		}
		if (ft_strequ("##start", line))
			flag = 1;
		else if (ft_strequ("##end", line))
			flag = 2;
		else if (line == '\0' && (r->vihod == 0 || r->vhod == 0))
			write_error(1, r);
		else
			setup_s_e(r, add_room_list(r, line), &flag, line);
		ft_strdel(&line);
	}
}
