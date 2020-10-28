/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_t_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:10:00 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:52:00 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		*minus_t_p(int n)
{
	int	*tr;
	int	i;

	if (!(tr = (int *)malloc(sizeof(int) * n)))
		exit(0);
	i = 0;
	while (i < n)
	{
		tr[i] = -1;
		i++;
	}
	return (tr);
}
