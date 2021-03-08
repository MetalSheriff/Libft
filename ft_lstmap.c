/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:06:46 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/14 17:25:42 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *start;

	if (!lst)
		return (NULL);
	if (!(new_list = ft_lstnew(f(lst->content))))
		return (NULL);
	start = new_list;
	lst = lst->next;
	while (lst)
	{
		if (!(new_list->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	return (start);
}
