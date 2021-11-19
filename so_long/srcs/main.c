/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:50:09 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/18 17:37:01 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int argc, char **argv)
{
	t_field	game;
	int		i;

	if (argc == 2)
	{
		check_extension(argv[1]);
		init_struct(&game);
		game.map = read_map(argv[1]);
		check_map(&game);
		open_game(&game);
		i = 0;
		while (game.map[i])
		{
			free(game.map[i]);
			i++;
		}
		free(game.map);
	}
	else
		printf("Error: invalid arguments\n");
	return (0);
}
