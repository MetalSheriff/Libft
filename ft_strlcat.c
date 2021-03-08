/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:09:38 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/07 18:06:51 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dest_size;
	size_t	i;

	src_size = 0;
	dest_size = 0;
	i = 0;
	while (src[i])
		i++;
	while (dest[dest_size] && dest_size < size)
		dest_size++;
	while (src[src_size] && dest_size + src_size + 1 < size)
	{
		dest[dest_size + src_size] = src[src_size];
		src_size++;
	}
	if (dest_size != size)
		dest[dest_size + src_size] = '\0';
	return (dest_size + i);
}
