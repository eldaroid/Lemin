/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_rebro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:37:39 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:29:18 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	add_rebro(t_rooms *r, char *l, int ants, int fd)
{
	char	*line;
	int		ret;

	write_error((r->start == -1 || r->end == -1), r);
	convert_rooms(r);
	fill_path(r, l, ants);
	ret = 1;
	while (ret)
	{
		ret = to_be(&line, fd);
		if (ret)
			fill_path(r, line, ants);
		ft_strdel(&line);
	}
	vhod_vihod(r);
}
