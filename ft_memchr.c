/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:21:54 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/07 18:05:46 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int n, size_t c)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < c && ptr[i] != (unsigned char)n)
		i++;
	if (i == c)
		return (NULL);
	return ((void *)&ptr[i]);
}
