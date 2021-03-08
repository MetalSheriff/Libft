/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 13:15:31 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/14 14:15:50 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *ptr;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		ptr = *lst;
		*lst = ptr->next;
		free(ptr);
	}
	*lst = NULL;
}
