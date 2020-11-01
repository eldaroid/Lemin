/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:32:00 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:29:57 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	fill_path(t_rooms *r, char *line, int ants)
{
	char	**split;
	int		first;
	int		second;

	split = ft_strsplit(line, '-');
	write_error((!split[1] || split[2]), r);
	first = receive_index(split[0], r);
	second = receive_index(split[1], r);
	r->paths[first][second] = 1;
	r->paths[second][first] = 1;
	free_split(split);
	if ((first == r->start || first == r->end) && (second == r->start
	|| second == r->end))
		s_e_ants(r, ants);
}
