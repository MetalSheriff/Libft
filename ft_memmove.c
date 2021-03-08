/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:19:17 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/07 18:06:25 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t c)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	i = 0;
	if (!str1 && !str2)
		return (NULL);
	if (str1 > str2)
	{
		while (c > 0)
		{
			str1[c - 1] = str2[c - 1];
			c--;
		}
	}
	else
		while (c > i)
		{
			str1[i] = str2[i];
			i++;
		}
	return (dest);
}
