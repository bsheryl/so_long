/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_ground.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:07:36 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/16 16:00:18 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

void	color_ground(t_field *game, int height, int width)
{
	int	i;
	int	j;
	int	trgb;

	trgb = create_trgb(0, 47, 47, 46);
	j = 0;
	while (j <= width)
	{
		i = game->height * game->img_h;
		while (i <= height)
		{
			mlx_pixel_put(game->mlx, game->win, j, i, trgb);
			i++;
		}
		j++;
	}
}
