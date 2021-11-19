/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_symbol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:43:03 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/18 17:51:15 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_symbol(t_field *game, int i, int j)
{
	if (game->map[i][j] == 'C')
		game->collect++;
	if (game->map[i][j] == 'P')
	{
		game->gamer_x = j;
		game->gamer_y = i;
		game->player++;
	}
	if (game->map[i][j] == 'E')
		game->exit++;
	if (game->map[i][j] != '1' && game->map[i][j] != '0'
		&& game->map[i][j] != 'P' && game->map[i][j] != 'E'
		&& game->map[i][j] != 'C')
	{
		printf("Error: erroneous map symbol\n");
		exit(0);
	}
}
