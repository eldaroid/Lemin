/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 15:44:40 by lgarse            #+#    #+#             */
/*   Updated: 2020/10/28 18:44:01 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

# define RED "\033[1;31m"
# define BLUE "\033[0;34m"
# define GREEN "\033[0;32m"

typedef struct	s_rooms
{
	int			**paths;
	int			index_rooms;
	int			vhod;
	int			count_lines;
	int			vihod;
	int			count_vihod;
	char		**room_names;
	int			**visited;
	int			**next;
	int			**prev;
	int			distance;
	t_list		*room_name_list;
	int			start;
	int			end;
	int			*length;
	int			*ant_path;
	int			*count_distance;
	int			count_steps;
	int			flag_bonus;
	int			**walk;
	int			*nant_path;
}				t_rooms;

int				read_ants(int fd);
int				gnl(char **line, int fd);
t_rooms			*init_rooms(void);
int				add_room_list(t_rooms *r, char *line);
void			add_rebro(t_rooms *r, char *l, int ants, int fd);
void			convert_rooms(t_rooms *r1);
void			setup_s_e(t_rooms *r, int ta, int *flag, char *line);
int				*zero_paths(int n);
void			delete_content(void *content, size_t content_size);
void			read_rooms(t_rooms *r, int ants, int fd);
void			fill_path(t_rooms *r, char *line, int ants);
int				to_be(char **line, int fd);
int				receive_index(char *name, t_rooms *r);
void			free_split(char **split);
void			find_paths(t_rooms *r);
void			vhod_vihod(t_rooms *r);
int				*minus_t_p(int n);
int				walking_ants(t_rooms *r, int ants);
void			pre_prev_visit(t_rooms *r1);
void			fill_visited(t_rooms *r, int n);
int				*path_sear_g(t_rooms *r, int n);
int				*path_search2_g(t_rooms *r, int *t_p, int t, int n);
void			reverse_path(t_rooms *r, int k);
int				count_distance(t_rooms *r, int n);
void			devide_ants(t_rooms *r, int ants);
void			steps_ants(t_rooms *r, int i, int **walk);
void			bonus_print(t_rooms *r, int ants, int ant_end);
void			check_duble(t_rooms *r, char **s);
void			prepare_div(t_rooms *r);
void			sear_g(t_rooms *r, int n);
int				*find_paths_1(t_rooms *r, int *temp, int t, int n);
int				walking_ants_2(t_rooms *r, int ants, int **walk,
				int *nant_path);
void			ant_finish(t_rooms *r, int **walk);
int				still_walking_2(t_rooms *r, int ant_end, int **walk, int i);
void			bonus_print2(t_rooms *r);
int				gnl00(char **line);
void			free_room(t_rooms *r, int i);
void			write_error(int n, t_rooms *r);
void			write_e_ants(int n, char *line);
void			bonus_print3(t_rooms *r, int i);
void			check_x_y(t_rooms *r, char **s);
void			free_room1(t_rooms *t, int i);
void			free_room2(t_rooms *t, int i);
void			s_e_ants(t_rooms *r, int ants);
#endif
