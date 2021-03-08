/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:12:10 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/07 18:05:24 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int i, size_t c)
{
	unsigned char *idest;
	unsigned char *isrc;

	idest = (unsigned char *)dest;
	isrc = (unsigned char *)src;
	while (c--)
	{
		*(idest++) = *(isrc++);
		if (*(isrc - 1) == (unsigned char)i)
			return (idest);
	}
	return (NULL);
}
