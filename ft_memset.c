/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:16:59 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/07 18:06:34 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int n, size_t c)
{
	unsigned char *ptr;

	ptr = (unsigned char *)str;
	while (c-- > 0)
		*(ptr++) = (unsigned char)n;
	return (str);
}
