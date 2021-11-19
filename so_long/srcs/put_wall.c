/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_wall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:06:03 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/16 16:40:24 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	put_bottom_wall(t_field *game, int x, int y)
{
	if (x / game->img_w != 0 && x / game->img_w != game->width - 1)
		mlx_put_image_to_window(game->mlx, game->win, game->wall_bottom.image,
			x, y);
	else if (x / game->img_w == 0)
		mlx_put_image_to_window(game->mlx, game->win, game->wall_bcr.image,
			x, y);
	else if (x / game->img_w == game->width - 1)
		mlx_put_image_to_window(game->mlx, game->win, game->wall_bcl.image,
			x, y);
}

void	put_top_wall(t_field *game, int x, int y)
{
	if (x / game->img_w == 0 && x % game->img_w == 0)
		mlx_put_image_to_window(game->mlx, game->win, game->wall_tcr.image,
			x, y);
	else if (x / game->img_w == game->width - 1 && x % game->img_w == 0)
		mlx_put_image_to_window(game->mlx, game->win, game->wall_tcl.image,
			x, y);
	else
		mlx_put_image_to_window(game->mlx, game->win, game->wall_top.image,
			x, y);
}

void	put_wall(t_field *game, int x, int y)
{
	if (y / game->img_h == 0 && y % game->img_h == 0)
		put_top_wall(game, x, y);
	else if (y / game->img_h == (game->height - 1) && y % game->img_h == 0)
		put_bottom_wall(game, x, y);
	else if (x / game->img_w == 0 && x % game->img_w == 0)
	{
		if (y / game->img_h != game->height - 1)
			mlx_put_image_to_window(game->mlx, game->win,
				game->wall_right.image, x, y);
	}
	else if (x / game->img_w == game->width - 1 && x % game->img_w == 0)
	{
		if (y / game->img_h != game->height - 1)
			mlx_put_image_to_window(game->mlx, game->win,
				game->wall_left.image, x, y);
	}
	else
		mlx_put_image_to_window(game->mlx, game->win, game->wall_obst.image,
			x, y);
}
