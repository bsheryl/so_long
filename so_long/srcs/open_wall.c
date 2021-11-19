/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_wall1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:42:28 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/16 16:42:05 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	open_wall_top(t_field *game)
{
	int	iw;
	int	ih;

	game->wall_tcl.image = mlx_xpm_file_to_image(game->mlx,
			"./img/wall_top_corner_left.xpm", &iw, &ih);
	if (game->wall_tcl.image == NULL)
		return (-1);
	game->wall_tcl.addr = mlx_get_data_addr(game->wall_tcl.image,
			&game->wall_tcl.bpp, &game->wall_tcl.len, &game->wall_tcl.end);
	game->wall_top.image = mlx_xpm_file_to_image(game->mlx,
			"./img/wall_top1.xpm", &iw, &ih);
	if (game->wall_top.image == NULL)
		return (-1);
	game->wall_top.addr = mlx_get_data_addr(game->wall_top.image,
			&game->wall_top.bpp, &game->wall_top.len, &game->wall_top.end);
	game->wall_tcr.image = mlx_xpm_file_to_image(game->mlx,
			"./img/wall_top_corner_right.xpm", &iw, &ih);
	if (game->wall_tcr.image == NULL)
		return (-1);
	game->wall_tcr.addr = mlx_get_data_addr(game->wall_tcr.image,
			&game->wall_tcr.bpp, &game->wall_tcr.len, &game->wall_tcr.end);
	return (0);
}

int	open_wall_bottom(t_field *game)
{
	int	iw;
	int	ih;

	game->wall_bcl.image = mlx_xpm_file_to_image(game->mlx,
			"./img/wall_bottom_corner_left.xpm", &iw, &ih);
	if (game->wall_bcl.image == NULL)
		return (-1);
	game->wall_bcl.addr = mlx_get_data_addr(game->wall_bcl.image,
			&game->wall_bcl.bpp, &game->wall_bcl.len, &game->wall_bcl.end);
	game->wall_bottom.image = mlx_xpm_file_to_image(game->mlx,
			"./img/wall_bottom.xpm", &iw, &ih);
	if (game->wall_bottom.image == NULL)
		return (-1);
	game->wall_bottom.addr = mlx_get_data_addr(game->wall_bottom.image,
			&game->wall_bottom.bpp, &game->wall_bottom.len,
			&game->wall_bottom.end);
	game->wall_bcr.image = mlx_xpm_file_to_image(game->mlx,
			"./img/wall_bottom_corner_right.xpm", &iw, &ih);
	if (game->wall_bcr.image == NULL)
		return (-1);
	game->wall_bcr.addr = mlx_get_data_addr(game->wall_bcr.image,
			&game->wall_bcr.bpp, &game->wall_bcr.len, &game->wall_bcr.end);
	return (0);
}

int	open_wall_other(t_field *game)
{
	int	iw;
	int	ih;

	game->wall_left.image = mlx_xpm_file_to_image(game->mlx,
			"./img/wall_left.xpm", &iw, &ih);
	if (game->wall_left.image == NULL)
		return (-1);
	game->wall_left.addr = mlx_get_data_addr(game->wall_left.image,
			&game->wall_left.bpp, &game->wall_left.len, &game->wall_left.end);
	game->wall_right.image = mlx_xpm_file_to_image(game->mlx,
			"./img/wall_right.xpm", &iw, &ih);
	if (game->wall_right.image == NULL)
		return (-1);
	game->wall_right.addr = mlx_get_data_addr(game->wall_right.image,
			&game->wall_right.bpp, &game->wall_right.len,
			&game->wall_right.end);
	game->wall_obst.image = mlx_xpm_file_to_image(game->mlx,
			"./img/obstacle1.xpm", &iw, &ih);
	if (game->wall_obst.image == NULL)
		return (-1);
	game->wall_obst.addr = mlx_get_data_addr(game->wall_obst.image,
			&game->wall_obst.bpp, &game->wall_obst.len, &game->wall_obst.end);
	return (0);
}
