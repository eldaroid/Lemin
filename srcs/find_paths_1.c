/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_paths_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:46:31 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:30:00 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		*find_paths_1(t_rooms *r, int *temp, int t, int n)
{
	int *temp2;

	while (r->count_vihod == t)
	{
		temp2 = path_search2_g(r, temp, t, n);
		ft_memdel((void **)&temp);
		temp = temp2;
		if (r->count_vihod == t && temp[0] == -1)
		{
			r->vihod = r->count_vihod;
			write_error((r->vihod == 0), r);
			break ;
		}
	}
	return (temp);
}
