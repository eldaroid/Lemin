# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/19 21:43:17 by lgarse            #+#    #+#              #
#    Updated: 2020/10/28 21:55:10 by fgracefo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			lem-in
LIBFT_A =		libft.a

COMP =			gcc -g -Wall -Werror -Wextra -I includes -I libft/includes -I libft/libft -c -o

OBJ_DIR =		obj/
SRC_DIR =		srcs/
LIBFT =			libft/

SRC =			add_rebro.c add_room_list.c convert_rooms.c delete_content.c\
                fill_path.c find_paths.c free_split.c gnl.c init_rooms.c\
                lem_in.c read_ants.c check_duble.c\
                read_rooms.c receive_index.c setup_s_e.c to_be.c pre_prev_visit.c\
                vhod_vihod.c zero_paths.c minus_t_p.c\
                path_sear_g.c path_search2_g.c fill_visited.c reverse_path.c\
                count_distance.c devide_ants.c walking_ants.c\
                steps_ants.c bonus_print.c prepare_div.c sear_g.c ants_finish.c\
                walking_ants_2.c still_walking_2.c find_paths_1.c bonus_print2.c\
                gnl00.c free_room.c write_error.c write_e_ants.c bonus_print3.c\
                check_x_y.c free_room1.c free_room2.c s_e_ants.c\

OBJ =			$(SRC:%.c=%.o)

SRC_PATH =   	$(SRC:%=$(SRC_DIR)%)
OBJ_PATH =		$(addprefix $(OBJ_DIR), $(OBJ))

all:			$(NAME)
				@echo "\\n\033[32;1m LEM-IN COMPLETE \033[0m \\n"

$(OBJ_DIR):
				@mkdir -p $(OBJ_DIR)
				@echo Create: Object directory

$(NAME):		do_libft $(OBJ_DIR) $(OBJ_PATH)
				@gcc $(OBJ_PATH) *.a -o $(NAME) $(LIBFT_A)\
					-I includes -I libft/includes

$(OBJ_PATH):	$(SRC_PATH) includes/lem_in.h
				@$(MAKE) $(OBJ)

$(OBJ):			$(LIBFT_A)
				@echo Create: $(@:obj/%=%)"\x1b[1A\x1b[M"
				@$(COMP) $(OBJ_DIR)$@ $(SRC_DIR)$(@:%.o=%.c)

do_libft:
				@make -C $(LIBFT)
				@cp $(LIBFT)/$(LIBFT_A) .

clean:
				@/bin/rm -rf $(OBJ_DIR) $(LIBFT_A)
				@make -C $(LIBFT) clean
				@echo "\\n\033[32;1m Cleaned libft \033[0m"

fclean:			clean
				@/bin/rm -f $(NAME) $(LIBFT_A)
				@make -C $(LIBFT) fclean
				@echo "\033[32;1m Cleaned $(NAME) \033[0m \\n"

re: 			fclean all

.PHONY:			all clean fclean re