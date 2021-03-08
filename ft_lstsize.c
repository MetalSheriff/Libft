/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:21:18 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/13 19:41:11 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;

	i = 1;
	if (!lst)
		return (0);
	else
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
			i++;
		}
	}
	return (i);
}
