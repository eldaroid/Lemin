/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_e_ants.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 10:49:39 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:31:41 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	write_e_ants(int n, char *line)
{
	if (n)
	{
		write(2, "ERROR\n", 6);
		if (line && *line)
			ft_strdel(&line);
		exit(0);
	}
}
