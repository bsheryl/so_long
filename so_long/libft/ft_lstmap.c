/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:21:30 by                   #+#    #+#             */
/*   Updated: 2021/10/11 19:59:26 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*newlst;

	if (!lst || !f)
		return (0);
	first = 0;
	while (lst)
	{
		newlst = ft_lstnew(f(lst->content));
		if (!newlst)
		{
			while (first)
			{
				newlst = first->next;
				(*del)(first->content);
				free(first);
				first = newlst;
			}
			lst = 0;
			return (0);
		}
		ft_lstadd_back(&first, newlst);
		lst = lst->next;
	}
	return (first);
}
