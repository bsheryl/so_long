/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_step_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:33:27 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/18 10:58:35 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	put_step_count(t_field *game)
{
	char	*steps;
	int		trgb;
	char	*str;

	str = ft_strdup("Steps: \0");
	trgb = create_trgb(0, 255, 255, 255);
	steps = ft_itoa(game->steps);
	str = ft_strjoin(str, steps);
	mlx_string_put(game->mlx, game->win, 40,
		game->img_h * (game->height + 1) - 15, trgb, str);
	free(str);
	free(steps);
}
