/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_s_e.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:31:20 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:52:35 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	setup_s_e(t_rooms *r, int ta, int *flag, char *line)
{
	if (*flag == 1 && r->start == -1)
		r->start = ta;
	else if (*flag == 2 && r->end == -1)
		r->end = ta;
	else if (*flag != 0)
	{
		ft_strdel(&line);
		write_error(1, r);
	}
	*flag = 0;
}
