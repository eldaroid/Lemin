/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_ants.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 15:50:52 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:30:59 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"
#include <fcntl.h>

int		read_ants(int fd)
{
	char		*line;
	int			ants;
	int			i;
	__int128_t	num;

	ants = get_next_line(fd, &line);
	if (ants == -1 || ants == 0 || line[0] == '\0')
		write_e_ants(1, line);
	i = 0;
	while (line[i])
		if (!(ft_isdigit(line[i++])) && !(line[0] == '+' ||
		(line[0] >= '0' && line[0] <= '9')))
			write_e_ants(1, line);
	i = 1;
	while (line[i])
		if (!ft_isdigit(line[i++]))
			write_e_ants(1, line);
	num = ft_atoi(line);
	if (num > 2147483647 || num <= 0)
		write_e_ants(1, line);
	ants = (int)num;
	ft_putnbr(ants);
	write(1, "\n", 1);
	ft_memdel((void**)&line);
	return (ants);
}
