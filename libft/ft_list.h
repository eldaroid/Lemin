/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:23:30 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:45:02 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	int				x;

	int				y;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

#endif
