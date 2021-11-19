/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_extension.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:15:58 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/17 15:09:13 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_extension(char *argv)
{
	size_t	len;

	len = ft_strlen(argv);
	if (argv[len - 4] == '.')
	{
		if (argv[len - 3] == 'b')
		{
			if (argv[len - 2] == 'e')
			{
				if (argv[len - 1] == 'r')
					return ;
			}
		}
	}
	else
	{
		ft_putstr_fd("Error: check file extension\n", 1);
		exit(0);
	}
}
