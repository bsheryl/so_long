/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:02:10 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/18 17:41:34 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	get_height(t_field *game)
{
	int	i;

	i = 0;
	while (game->map[i])
		i++;
	return (i);
}

void	is_correct_size(t_field *game)
{
	int	i;

	i = 0;
	while (game->map[i])
	{
		if ((int)ft_strlen(game->map[i]) != game->width)
			ft_puterror();
		i++;
	}
}

void	check_object(t_field *game)
{
	int	j;
	int	i;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			check_symbol(game, i, j);
			j++;
		}
		i++;
	}
	if (game->player != 1 || game->exit < 1 || game->collect < 1)
		ft_puterror();
}

void	is_correct_edges(t_field *game)
{
	int	i;
	int	j;
	int	last;

	j = -1;
	while (game->map[0][++j])
	{
		if (game->map[0][j] != '1')
			ft_puterror();
	}
	i = -1;
	while (game->map[++i])
	{
		last = ft_strlen(game->map[i]) - 1;
		if (game->map[i][0] != '1' || game->map[i][last] != '1')
			ft_puterror();
	}
	i--;
	j = -1;
	while (game->map[i][++j])
	{
		if (game->map[i][j] != '1')
			ft_puterror();
	}
}

void	check_map(t_field *game)
{
	game->width = ft_strlen(game->map[0]);
	game->height = get_height(game);
	is_correct_size(game);
	check_object(game);
	is_correct_edges(game);
}
