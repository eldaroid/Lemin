/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_paths.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:34:03 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:31:48 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		*zero_paths(int n)
{
	int	*tr;
	int	i;

	if (!(tr = (int *)malloc(sizeof(int) * n)))
		exit(0);
	i = 0;
	while (i < n)
	{
		tr[i] = 0;
		i++;
	}
	return (tr);
}
