/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_images.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:43:36 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/17 15:07:00 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	put_image_to_window(char c, t_field *game, int x, int y)
{
	if (c == '0')
		mlx_put_image_to_window(game->mlx, game->win, game->ground.image, x, y);
	else if (c == '1')
		put_wall(game, x, y);
	else if (c == 'E')
		mlx_put_image_to_window(game->mlx, game->win, game->exit_img.image,
			x, y);
	else if (c == 'C')
		mlx_put_image_to_window(game->mlx, game->win, game->coll_img.image,
			x, y);
	else if (c == 'P')
		mlx_put_image_to_window(game->mlx, game->win, game->plr_img.image,
			x, y);
}

void	put_images(t_field *game)
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = game->width - 1;
	a = 0;
	while (i >= 0)
	{
		j = game->height - 1;
		b = 0;
		while (j >= 0)
		{
			put_image_to_window(game->map[b][a], game, a * game->img_w,
				b * game->img_h);
			b++;
			j--;
		}
		a++;
		i--;
	}
	color_ground(game, game->img_h * (game->height + 1),
		game->img_w * game->width);
	put_step_count(game);
}
