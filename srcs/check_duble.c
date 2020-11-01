/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:38:50 by fgracefo          #+#    #+#             */
/*   Updated: 2020/11/01 20:29:36 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void		check_duble(t_rooms *r, char **s)
{
	t_list		*temp;
	long int	a;
	long int	b;

	check_x_y(r, s);
	temp = r->room_name_list;
	a = ft_atoi(s[1]);
	b = ft_atoi(s[2]);
	if (a > 2147483647 || a < -2147483648 || b > 2147483647 || b < -2147483648)
		write_error(1, r);
	r->room_name_list->x = (int)a;
	r->room_name_list->y = (int)b;
	while (temp && temp->next)
	{
		if ((!ft_strcmp((char*)temp->next->content, (char*)s[0])) ||
		(temp->next->x == a && temp->next->y == b))
		{
			free_split(s);
			write_error(1, r);
		}
		temp = temp->next;
	}
}
