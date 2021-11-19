/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:00:13 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/18 17:51:15 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../minilibx_opengl_20191021/mlx.h"
# include <stdio.h>
# include "../libft/libft.h"
# include <fcntl.h>

# define ESC_KEY 53
# define W_KEY 13
# define A_KEY 0
# define S_KEY 1
# define D_KEY 2

typedef struct s_image
{
	void	*image;
	char	*addr;
	int		bpp;
	int		len;
	int		end;
}	t_image;

typedef struct s_field
{
	char	**map;
	int		height;
	int		width;
	int		player;
	int		collect;
	int		exit;
	int		steps;
	void	*mlx;
	void	*win;
	int		gamer_x;
	int		gamer_y;
	int		finish;
	t_image	ground;
	t_image	wall_top;
	t_image	wall_tcl;
	t_image	wall_left;
	t_image	wall_bcl;
	t_image	wall_bottom;
	t_image	wall_bcr;
	t_image	wall_right;
	t_image	wall_tcr;
	t_image	wall_obst;
	t_image	exit_img;
	t_image	coll_img;
	t_image	plr_img;

	int		img_h;
	int		img_w;
}	t_field;

int		main(int argc, char **argv);
int		count_line(char *name_map);
int		get_height(t_field *game);
int		open_images(t_field *game);
int		create_trgb(int t, int r, int g, int b);
int		open_wall_top(t_field *game);
int		open_wall_bottom(t_field *game);
int		open_wall_other(t_field *game);
int		open_exit(t_field *game);
int		open_collect(t_field *game);
int		open_player(t_field *game);
int		key_press(int key, t_field *game);
int		go_to_up(int key, t_field *game);
int		go_to_down(int key, t_field *game);
int		go_to_left(int key, t_field *game);
int		go_to_right(int key, t_field *game);
int		close_game(void);

char	*gnl_map(int fd);

char	**read_map(char *name_map);

void	check_extension(char *argv);
void	check_map(t_field *game);
void	is_correct_size(t_field *game);
void	check_object(t_field *game);
void	ft_puterror(void);
void	is_correct_edges(t_field *game);
void	open_game(t_field *game);
void	color_ground(t_field *game, int height, int wigth);
void	put_images(t_field *game);
void	put_image_to_window(char c, t_field *game, int x, int y);
void	init_struct(t_field *game);
void	init_image(t_field *game);
void	put_wall(t_field *game, int x, int y);
void	put_top_wall(t_field *game, int x, int y);
void	put_bottom_wall(t_field *game, int x, int y);
void	put_step_count(t_field *game);
void	check_symbol(t_field *game, int i, int j);

#endif