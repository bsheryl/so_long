/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_to.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:29:42 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/18 11:52:01 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	go_to_up(int key, t_field *game)
{
	if (game->map[game->gamer_y - 1][game->gamer_x] == 'E'
		&& game->collect == 0)
	{
		game->steps++;
		printf("Step №%d\n", game->steps);
		exit(0);
	}
	else if (game->map[game->gamer_y - 1][game->gamer_x] == 'E'
		&& game->collect != 0)
		return (key);
	else if (game->map[game->gamer_y - 1][game->gamer_x] != '1')
	{
		if (game->map[game->gamer_y - 1][game->gamer_x] == 'C')
			game->collect--;
		game->gamer_y--;
		game->map[game->gamer_y][game->gamer_x] = 'P';
		game->map[game->gamer_y + 1][game->gamer_x] = '0';
		game->steps++;
		printf("Step №%d\n", game->steps);
	}
	return (key);
}

int	go_to_down(int key, t_field *game)
{
	if (game->map[game->gamer_y + 1][game->gamer_x] == 'E'
		&& game->collect == 0)
	{
		game->steps++;
		printf("Step №%d\n", game->steps);
		exit(0);
	}
	else if ((game->map[game->gamer_y + 1][game->gamer_x] == 'E'
		&& game->collect != 0))
		return (key);
	else if (game->map[game->gamer_y + 1][game->gamer_x] != '1')
	{
		if (game->map[game->gamer_y + 1][game->gamer_x] == 'C')
			game->collect--;
		game->gamer_y++;
		game->map[game->gamer_y][game->gamer_x] = 'P';
		game->map[game->gamer_y - 1][game->gamer_x] = '0';
		game->steps++;
		printf("Step №%d\n", game->steps);
	}
	return (key);
}

int	go_to_left(int key, t_field *game)
{
	if (game->map[game->gamer_y][game->gamer_x - 1] == 'E'
		&& game->collect == 0)
	{
		game->steps++;
		printf("Step №%d\n", game->steps);
		exit(0);
	}
	else if (game->map[game->gamer_y][game->gamer_x - 1] == 'E'
		&& game->collect != 0)
		return (key);
	else if (game->map[game->gamer_y][game->gamer_x - 1] != '1')
	{
		if (game->map[game->gamer_y][game->gamer_x - 1] == 'C')
			game->collect--;
		game->gamer_x--;
		game->map[game->gamer_y][game->gamer_x] = 'P';
		game->map[game->gamer_y][game->gamer_x + 1] = '0';
		game->steps++;
		printf("Step №%d\n", game->steps);
	}
	return (key);
}

int	go_to_right(int key, t_field *game)
{
	if (game->map[game->gamer_y][game->gamer_x + 1] == 'E'
		&& game->collect == 0)
	{
		game->steps++;
		printf("Step №%d\n", game->steps);
		exit(0);
	}
	else if (game->map[game->gamer_y][game->gamer_x + 1] == 'E'
		&& game->collect != 0)
		return (key);
	else if (game->map[game->gamer_y][game->gamer_x + 1] != '1')
	{
		if (game->map[game->gamer_y][game->gamer_x + 1] == 'C')
			game->collect--;
		game->gamer_x++;
		game->map[game->gamer_y][game->gamer_x] = 'P';
		game->map[game->gamer_y][game->gamer_x - 1] = '0';
		game->steps++;
		printf("Step №%d\n", game->steps);
	}
	return (key);
}
