/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 10:12:28 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/07 18:07:06 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t l;

	if (!dest || !src)
		return (0);
	l = 0;
	while (src[l])
		l++;
	if (destsize == 0)
		return (l);
	l = 0;
	while (src[l] && destsize - 1 > l)
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';
	while (src[l])
	{
		l++;
	}
	return (l);
}
