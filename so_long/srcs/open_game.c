/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:37:17 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/17 14:55:43 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	key_press(int key, t_field *game)
{
	if (key == ESC_KEY)
		exit(0);
	if (key == W_KEY)
		go_to_up(key, game);
	if (key == S_KEY)
		go_to_down(key, game);
	if (key == A_KEY)
		go_to_left(key, game);
	if (key == D_KEY)
		go_to_right(key, game);
	put_images(game);
	return (0);
}

void	open_game(t_field *game)
{
	int	win_height;
	int	win_width;

	game->mlx = mlx_init();
	win_height = (game->height + 1) * game->img_h;
	win_width = game->width * game->img_w;
	game->win = mlx_new_window(game->mlx, win_width, win_height, "so_long");
	if (open_images(game) == -1)
	{
		printf("Error: some image is not open\n");
		exit(0);
	}
	put_images(game);
	mlx_key_hook(game->win, key_press, game);
	mlx_hook(game->win, 17, 0L, close_game, 0);
	mlx_loop(game->mlx);
}
