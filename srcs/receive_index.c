/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   receive_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 17:56:57 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:52:23 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int	receive_index(char *name, t_rooms *r)
{
	int		i;
	char	**names;

	i = 0;
	names = r->room_names;
	while (names[i])
	{
		if (ft_strequ(names[i], name))
			return (i);
		i++;
	}
	write_error(1, r);
	return (-1);
}
