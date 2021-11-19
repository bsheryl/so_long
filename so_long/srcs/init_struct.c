/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:12:27 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/18 10:54:50 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	init_struct(t_field *game)
{
	game->map = NULL;
	game->height = 0;
	game->width = 0;
	game->player = 0;
	game->collect = 0;
	game->exit = 0;
	game->steps = 0;
	game->mlx = NULL;
	game->win = NULL;
	game->finish = 0;
	game->img_h = 40;
	game->img_w = 40;
}
