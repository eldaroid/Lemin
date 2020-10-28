/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_room_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:20:51 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:50:41 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int	add_room_list(t_rooms *r, char *line)
{
	char	**s;

	s = ft_strsplit(line, ' ');
	write_error((s == NULL || s[0] == NULL || s[0][0] == 'L'), r);
	write_error((!s[1] || !s[2] || s[3] || s[0][0] == '#'), r);
	ft_lstadd(&(r->room_name_list), ft_lstnew(s[0], ft_strlen(s[0]) + 1));
	check_duble(r, s);
	free_split(s);
	r->index_rooms++;
	return (r->index_rooms - 1);
}
