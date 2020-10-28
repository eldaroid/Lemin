/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:30:24 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:50:04 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		fin_line(char **fdstr, char **line)
{
	int			lef;
	char		*future;

	lef = 0;
	while ((*fdstr)[lef] != '\n' && (*fdstr)[lef] != '\0')
		lef++;
	if ((*fdstr)[lef] == '\n')
	{
		*line = ft_strsub(*fdstr, 0, lef);
		future = ft_strdup(&((*fdstr)[lef + 1]));
		free(*fdstr);
		*fdstr = future;
		if ((*fdstr)[0] == '\0')
			ft_strdel(fdstr);
	}
	else
	{
		*line = ft_strdup(*fdstr);
		ft_strdel(fdstr);
	}
	return (1);
}

static int		m_read_line(char **fdstr, int fd)
{
	int			ir;
	char		ret[BUFF_SIZE + 1];
	char		*temp_fdstr;

	while ((ir = read(fd, ret, BUFF_SIZE)) > 0)
	{
		ret[ir] = '\0';
		if (fdstr[fd] == NULL)
			fdstr[fd] = ft_strdup(ret);
		else
		{
			temp_fdstr = ft_strjoin(fdstr[fd], ret);
			free(fdstr[fd]);
			fdstr[fd] = temp_fdstr;
		}
		if (ft_strchr(ret, '\n'))
			break ;
	}
	return (ir);
}

int				get_next_line(const int fd, char **line)
{
	static char	*fdstr[FD_SIZE];
	int			ir;

	if (line == NULL || fd < 0)
		return (-1);
	ir = m_read_line(fdstr, fd);
	if (ir < 0)
		return (-1);
	else if (ir == 0 && (fdstr[fd] == NULL || fdstr[fd][0] == '\0'))
		return (0);
	else
		fin_line(&fdstr[fd], line);
	return (1);
}
