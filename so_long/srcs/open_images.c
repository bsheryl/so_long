/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:16:02 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/17 15:37:49 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	open_collect(t_field *game)
{
	int	iw;
	int	ih;

	game->coll_img.image = mlx_xpm_file_to_image(game->mlx,
			"./img/heart.xpm", &iw, &ih);
	if (game->coll_img.image == NULL)
		return (-1);
	game->coll_img.addr = mlx_get_data_addr(game->coll_img.image,
			&game->coll_img.bpp, &game->coll_img.len, &game->coll_img.end);
	return (0);
}

int	open_exit(t_field *game)
{
	int	iw;
	int	ih;

	game->exit_img.image = mlx_xpm_file_to_image(game->mlx,
			"./img/exit.xpm", &iw, &ih);
	if (game->exit_img.image == NULL)
		return (-1);
	game->exit_img.addr = mlx_get_data_addr(game->exit_img.image,
			&game->exit_img.bpp, &game->exit_img.len, &game->exit_img.end);
	return (0);
}

int	open_ground(t_field *game)
{
	int	iw;
	int	ih;

	game->ground.image = mlx_xpm_file_to_image(game->mlx,
			"./img/ground1.xpm", &iw, &ih);
	if (game->ground.image == NULL)
		return (-1);
	game->ground.addr = mlx_get_data_addr(game->ground.image,
			&game->ground.bpp, &game->ground.len, &game->ground.end);
	return (0);
}

int	open_player(t_field *game)
{
	int	iw;
	int	ih;

	game->plr_img.image = mlx_xpm_file_to_image(game->mlx,
			"./img/char_down.xpm", &iw, &ih);
	if (game->plr_img.image == NULL)
		return (-1);
	game->plr_img.addr = mlx_get_data_addr(game->plr_img.image,
			&game->plr_img.bpp, &game->plr_img.len, &game->plr_img.end);
	return (0);
}

int	open_images(t_field *game)
{
	int	err;

	err = 0;
	if (open_ground(game) == -1)
		err++;
	if (open_wall_top(game) == -1)
		err++;
	if (open_wall_bottom(game) == -1)
		err++;
	if (open_wall_other(game) == -1)
		err++;
	if (open_exit(game) == -1)
		err++;
	if (open_collect(game) == -1)
		err++;
	if (open_player(game) == -1)
		err++;
	if (err != 0)
		return (-1);
	return (0);
}
