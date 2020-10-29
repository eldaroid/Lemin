/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 15:56:59 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:51:47 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		gnl(char **line, int fd)
{
	char	*c;
	int		gnl_ret;

	while ((gnl_ret = get_next_line(fd, &c)))
	{
		if (gnl_ret == -1)
			exit(1);
		if (c[0] != '#' || ft_strequ("##start", c) ||
			ft_strequ("##end", c))
		{
			*line = c;
			ft_putstr(c);
			ft_putchar('\n');
			break ;
		}
		else
			ft_strdel(&c);
	}
	return (gnl_ret);
}
