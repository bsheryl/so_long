/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:04:24 by                   #+#    #+#             */
/*   Updated: 2021/10/09 13:54:48 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_check(char chr, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == chr)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	if (!s1)
		return (0);
	start = 0;
	while (ft_check(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && ft_check(s1[end], set))
		end--;
	res = malloc(sizeof(*res) * (end - start + 2));
	if (res == 0)
		return (0);
	i = 0;
	while (start <= end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
