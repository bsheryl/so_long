/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:05:46 by                   #+#    #+#             */
/*   Updated: 2021/10/11 19:06:45 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*list;

	list = *lst;
	while (list)
	{
		tmp = list->next;
		if (list->content)
			del(list->content);
		free(list);
		list = tmp;
	}
	*lst = 0;
}
