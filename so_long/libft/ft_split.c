/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:29:08 by                   #+#    #+#             */
/*   Updated: 2021/10/31 15:18:00 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_countstr(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			count++;
		i++;
	}
	return (count);
}

int	ft_sizestr(char const *s, char c)
{
	int	size;

	size = 0;
	while (s[size] != c && s[size] != 0)
		size++;
	return (size);
}

void	*ft_clean(char **res, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}

char	**ft_fill(char *s, char c, char **res, int count)
{
	int	i;
	int	size;
	int	j;

	i = -1;
	while (++i < count)
	{
		while (*s == c)
			s++;
		size = ft_sizestr(s, c);
		res[i] = malloc((sizeof(char)) * (size + 1));
		if (res[i] == 0)
			return (ft_clean(res, i));
		j = 0;
		while (j < size)
		{
			res[i][j] = *s;
			j++;
			s++;
		}
		res[i][j] = 0;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char *s, char c)
{
	char	**res;
	int		count;

	if (!s)
		return (0);
	count = ft_countstr(s, c);
	res = malloc(sizeof(char *) * (count + 1));
	if (res == 0)
		return (0);
	res = ft_fill(s, c, res, count);
	return (res);
}
