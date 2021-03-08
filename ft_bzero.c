/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:35:49 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/07 18:05:02 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	unsigned char	*dst;
	size_t			i;

	dst = dest;
	i = 0;
	while (i++ < n)
	{
		*dst = 0;
		dst++;
	}
}
