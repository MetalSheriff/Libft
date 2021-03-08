/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:29:01 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/07 18:08:01 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	length;

	length = 0;
	while (str[length])
		length++;
	if ((char)c == '\0')
		return ((char *)str + length);
	while (length--)
	{
		if (*(str + length) == c)
			return ((char *)(str + length));
	}
	return (NULL);
}
