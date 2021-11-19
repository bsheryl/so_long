/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:32:21 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/18 11:55:13 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	*gnl_map(int fd)
{
	char	*str;
	char	buf[2];
	int		byte;

	str = malloc(1);
	if (!str)
		exit(0);
	str[0] = '\0';
	byte = 1;
	while (byte > 0)
	{
		byte = read(fd, &buf, 1);
		if (byte == -1)
			return (NULL);
		if (buf[0] == '\n' || byte == 0)
			break ;
		str = ft_strjoin(str, &buf[0]);
	}
	return (str);
}

int	count_line(char *name_map)
{
	int		count;
	int		byte;
	char	buf;
	int		fd;

	count = 1;
	fd = open(name_map, O_RDONLY);
	byte = 1;
	while (byte > 0)
	{
		byte = read(fd, &buf, 1);
		if (buf == '\n')
			count++;
	}
	if (byte == -1)
	{
		ft_putstr_fd("Error: map not read\n", 1);
		exit(0);
	}
	close(fd);
	return (count);
}

char	**read_map(char *name_map)
{
	int		line;
	int		fd;
	char	**map;
	int		i;

	line = count_line(name_map);
	map = malloc(sizeof(char **) * (line + 1));
	if (!map)
		exit(0);
	fd = open(name_map, O_RDONLY);
	i = 0;
	while (i < line)
	{
		map[i] = gnl_map(fd);
		i++;
	}
	map[i] = NULL;
	close(fd);
	return (map);
}
